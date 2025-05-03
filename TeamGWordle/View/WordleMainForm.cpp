#include "WordleMainForm.h"

#include "UserLogin.h"
#include "../Utils/Utils.h"
#include "../Controller/GameController.h"
#include "../Controller/SoundController.h"
#include "StatsForm.h"


using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace controller;
using namespace View;

// The entry point for the application
[STAThreadAttribute]
int main(array<System::String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TeamGWordle::WordleMainForm form;
	Application::Run(%form);
	return 0;
}

namespace TeamGWordle
{
	WordleMainForm::WordleMainForm(void)
	{
		InitializeComponent();
		this->setDelButtonImage();
		this->labels = gcnew array<System::Windows::Forms::Label^, 2>(this->gameController->getMaxAttempts(),
		                                                              this->gameController->getWordLength());
		for (int row = 0; row < this->gameController->getMaxAttempts(); ++row)
		{
			for (int col = 0; col < this->gameController->getWordLength(); ++col)
			{
				Control^ ctrl = this->tableLayoutPanel1->GetControlFromPosition(col, row);
				labels[row, col] = dynamic_cast<Label^>(ctrl);
			}
		}
		this->currentRow = 0;
		this->currentCol = 0;
		this->systemTheme = IsSystemInDarkMode() ? Theme::Dark : Theme::Light;
		this->applyTheme(this->systemTheme);
		this->getUsernameFromLogin();
		std::string word = toStandardString(this->username);
		this->gameController = new controller::GameController(word);
		this->soundController = new SoundController();
		this->setLetterReuseAtStart();
		this->gameController->startGame();
		this->enableCorrectWordDisplay();
		this->enterButtonEnable();
		this->inputBuffer = "";
		this->KeyPreview = true;
		this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &WordleMainForm::onKeyDown);
		this->KeyPress += gcnew KeyPressEventHandler(this, &WordleMainForm::onKeyPress);
	}

	void WordleMainForm::getUsernameFromLogin()
	{
		UserLogin loginDialog;
		loginDialog.applyTheme(this->systemTheme);

		const auto result = loginDialog.ShowDialog();

		if (result == Windows::Forms::DialogResult::OK)
		{
			this->username = loginDialog.getUsername();
		}
		else
		{
			System::Diagnostics::Debug::WriteLine("Login cancelled or failed.");
			this->Close();
		}
	}

	WordleMainForm::~WordleMainForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void WordleMainForm::newGameButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->isGameOver = false;
		this->gameController->startGame();
		this->currentRow = 0;
		this->currentCol = 0;
		this->resetBoards();
		this->enterButtonEnable();
		this->buttonDelete->Enabled = true;
		this->buttonDelete->Focus();
		this->letters->Clear();
		this->enableCorrectWordDisplay();
	}

	void WordleMainForm::menutItemNewGame_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->newGameButton_Click(sender, e);
	}

	void WordleMainForm::menuItemExit_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	void WordleMainForm::menuItemDuplicateLetters_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		this->gameController->setEnableCharRepetition(this->menuItemDuplicateLetters->Checked);
		this->gameController->setPlayerReuseLetters();
	}

	void WordleMainForm::setLetterReuseAtStart()
	{
		if (this->gameController->getPlayerReuseLetters())
		{
			this->menuItemDuplicateLetters->Checked = true;
		}
		else
		{
			this->menuItemDuplicateLetters->Checked = false;
		}
	}

	void WordleMainForm::onKeyPress(Object^ sender, KeyPressEventArgs^ e)
	{
		System::Diagnostics::Debug::WriteLine("Key pressed: " + e->KeyChar);
		this->processCharacterInput(e->KeyChar);
	}

	void WordleMainForm::buttonClick(Object^ sender, EventArgs^ e)
	{
		Button^ clickedButton = dynamic_cast<Button^>(sender);
		if (clickedButton != nullptr)
		{
			Char c;
			if (clickedButton != this->buttonDelete)
			{
				String^ letter = clickedButton->Text;
				c = letter[0];
			}
			else
			{
				c = '\b';
			}
			this->processCharacterInput(c);
		}
	}

	void WordleMainForm::onKeyDown(Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
	{
		if (e->KeyCode == Keys::Enter)
		{
			this->buttonEnter_Click(sender, e);
		}
	}

	void WordleMainForm::buttonEnter_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->inputBuffer->Length == this->gameController->getWordLength())
		{
			if (!this->gameController->isValidWord(toStandardString(this->inputBuffer->ToUpper())))
			{
				for (int col = 0; col < this->gameController->getWordLength(); ++col)
				{
					labels[this->currentRow, col]->BackColor = Color::Red;
					this->updateButtonColor(labels[this->currentRow, col]->Text[0], Color::Red);
					this->letters->Add(labels[this->currentRow, col]->Text[0]);
					labels[this->currentRow, col]->Text = "";
				}
				this->inputBuffer = "";
				this->currentCol = 0;
			}
			else
			{
				this->wordValidGamePlay();
			}
		}
	}

	void WordleMainForm::wordValidGamePlay()
	{
		std::string word = toStandardString(this->inputBuffer->ToUpper());
		auto result = this->gameController->enteredWord(word);
		for (int i = 0; i < result.size(); ++i)
		{
			char letter = word[i];
			Char letterChar = letter;
			switch (result[i].status)
			{
			case MatchStatus::Correct:
				labels[this->currentRow, i]->BackColor = Color::Green;
				this->updateButtonColor(letterChar, Color::Green);
				break;
			case MatchStatus::Present:
				labels[this->currentRow, i]->BackColor = Color::Goldenrod;
				this->updateButtonColor(letterChar, Color::Goldenrod);
				break;
			case MatchStatus::Absent:
				labels[this->currentRow, i]->BackColor = Color::Gray;
				this->updateButtonColor(letterChar, Color::Gray);
				break;
			}
			this->letters->Add(letterChar);
		}
		this->checkGamePlayStatus();
	}

	void WordleMainForm::checkGamePlayStatus()
	{
		this->currentRow++;
		if (toStandardString(this->inputBuffer->ToUpper()) == this->gameController->getCorrectWord())
		{
			this->gameController->gamesPlayed(Model::GameCode::Win, this->currentRow);
			this->enableCorrectWordDisplay(true, Color::Green);
			this->soundController->playWinningSound();
			this->endGame();
		}
		else if (this->currentRow < this->gameController->getMaxAttempts())
		{
			this->currentCol = 0;
			this->inputBuffer = "";
		}
		else
		{
			this->gameController->gamesPlayed(Model::GameCode::Lose, this->currentRow);
			this->enableCorrectWordDisplay(true, Color::Red);
			this->soundController->playLosingSound();
			this->endGame();
		}
		this->enterButtonEnable();
	}

	void WordleMainForm::processCharacterInput(Char ch)
	{
		if (isGameOver)
		{
			return;
		}

		if (Char::IsLetter(ch))
		{
			if (currentRow < this->gameController->getMaxAttempts() && currentCol < this->gameController->
				getWordLength())
			{
				labels[currentRow, currentCol]->Text = ch.ToString()->ToUpper();
				inputBuffer += ch;
				currentCol++;
			}
		}
		else if (this->buttonDelete->Enabled && ch == '\b')
		{
			if (currentCol > 0)
			{
				currentCol--;
				labels[currentRow, currentCol]->Text = "";
				inputBuffer = inputBuffer->Substring(0, inputBuffer->Length - 1);
			}
		}
		this->enterButtonEnable();
	}

	void WordleMainForm::resetBoards()
	{
		for (int row = 0; row < this->gameController->getMaxAttempts(); row++)
		{
			for (int col = 0; col < this->gameController->getWordLength(); col++)
			{
				labels[row, col]->Text = "";
				labels[row, col]->BackColor = this->BackColor;
			}
		}
		this->resetButtonColor();
		this->inputBuffer = "";
	}

	void WordleMainForm::enterButtonEnable()
	{
		if (currentCol == this->gameController->getWordLength())
		{
			this->buttonEnter->Enabled = true;
			this->buttonEnter->Focus();
		}
		else
		{
			this->buttonDelete->Focus();
			this->buttonEnter->Enabled = false;
		}
	}

	void WordleMainForm::endGame()
	{
		this->gameController->saveUserStats();
		this->displayStats();
		this->enterButtonEnable();
		this->isGameOver = true;
		this->currentCol = 0;
		this->buttonDelete->Enabled = false;
		this->newGameButton->Focus();
	}

	void WordleMainForm::updateButtonColor(Char c, Color color)
	{
		for each (Control^ control in this->Controls)
		{
			Button^ button = dynamic_cast<Button^>(control);
			if (button != nullptr && button->Text == c.ToString())
			{
				button->BackColor = color;
				break;
			}
		}
	}

	void WordleMainForm::resetButtonColor()
	{
		for each (Char c in this->letters)
		{
			this->updateButtonColor(c, this->BackColor);
		}
	}

	System::Void WordleMainForm::menuItemShowStats_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->displayStats();
	}


	void WordleMainForm::displayStats()
	{
		StatsForm^ statsForm = gcnew StatsForm(this->gameController->getPlayer(), this->currentRow);
		statsForm->applyTheme(this->systemTheme);
		statsForm->ShowDialog();
	}

	void WordleMainForm::applyTheme(Theme theme)
	{
		System::Drawing::Color backgroundColor;
		System::Drawing::Color foreColor;
		if (theme == Theme::Dark)
		{
			backgroundColor = System::Drawing::Color::FromArgb(30, 30, 30);
			foreColor = System::Drawing::Color::White;
			this->menuItemDarkTheme->Checked = true;
		}
		else
		{
			backgroundColor = System::Drawing::SystemColors::Control;
			foreColor = System::Drawing::SystemColors::ControlText;
		}
		this->BackColor = backgroundColor;
		this->ForeColor = foreColor;

		for each (Control^ control in this->Controls)
		{
			control->BackColor = backgroundColor;
			control->ForeColor = foreColor;
		}
		for each (Label^ label in this->labels)
		{
			label->BackColor = backgroundColor;
			label->ForeColor = foreColor;
		}
		this->systemTheme = theme;
	}

	void WordleMainForm::menuItemDarkTheme_CheckedChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (this->menuItemDarkTheme->Checked)
		{
			this->applyTheme(Theme::Dark);
		}
		else
		{
			this->applyTheme(Theme::Light);
		}
	}

	void WordleMainForm::enableCorrectWordDisplay(bool enable, Color color)
	{
		this->correctWord->Visible = enable;
		this->correctWord->ForeColor = color;
		this->correctWord->Text = gcnew String(this->gameController->getCorrectWord().c_str());
	}

	void WordleMainForm::setDelButtonImage()
	{
		Image^ img = Image::FromFile(L"Assets/backspace.png");
		int targetWidth = this->buttonDelete->Width - 5;
		int targetHeight = this->buttonDelete->Height - 5;
		float scale = Math::Min(
			static_cast<float>(targetWidth) / img->Width,
			static_cast<float>(targetHeight) / img->Height
		);
		int newWidth = static_cast<int>(img->Width * scale);
		int newHeight = static_cast<int>(img->Height * scale);
		Bitmap^ resizedImg = gcnew Bitmap(img, newWidth, newHeight);
		this->buttonDelete->Image = resizedImg;
	}
}
