#include "UserLogin.h"

namespace View
{
	UserLogin::UserLogin()
	{
		InitializeComponent();
	}

	UserLogin::~UserLogin()
	{
		if (components)
		{
			delete components;
		}
	}

	String^ UserLogin::getUsername()
	{
		return this->username;
	}

	void UserLogin::buttonStart_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (String::IsNullOrEmpty(this->textBoxUsername->Text))
		{
			MessageBox::Show("Please enter a username.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		this->username = this->textBoxUsername->Text;
		this->DialogResult = Windows::Forms::DialogResult::OK;
	}

	void UserLogin::applyTheme(TeamGWordle::Theme theme)
	{
		System::Drawing::Color backColor;
		System::Drawing::Color foreColor;
		if (theme == TeamGWordle::Theme::Dark)
		{
			backColor = System::Drawing::Color::FromArgb(30, 30, 30);
			foreColor = System::Drawing::Color::White;
		}
		else
		{
			backColor = System::Drawing::SystemColors::Control;
			foreColor = System::Drawing::SystemColors::ControlText;
		}
		this->BackColor = backColor;
		this->ForeColor = foreColor;
		this->updateControlColor(backColor, foreColor);
	}

	void UserLogin::updateControlColor(const System::Drawing::Color& backColor, const System::Drawing::Color& foreColor)
	{
		for each (Control^ control in this->Controls)
		{
			control->BackColor = backColor;
			control->ForeColor = foreColor;
		}
	}
}
