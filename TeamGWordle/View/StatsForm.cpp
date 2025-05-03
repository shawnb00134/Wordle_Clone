#include "StatsForm.h"

namespace View
{
	StatsForm::StatsForm(const Model::Player* player, int row)
	{
		InitializeComponent();
		this->setUpBarChart();
		this->updateStatistics(player, row);
	}

	StatsForm::~StatsForm()
	{
		if (components)
		{
			delete components;
		}
	}

	void StatsForm::updateStatistics(const Model::Player* player, int row)
	{
		this->gamePlayLabel->Text = System::Convert::ToString(player->getGamesPlayed());
		this->maxStreakLabel->Text = System::Convert::ToString(player->getLongestWinStreak());
		this->currStreakLabel->Text = System::Convert::ToString(player->getWinStreak());
		this->winPercentLabel->Text = System::Convert::ToString(player->getWinPercentage());
		this->displayGuessDistribution(player, row);
	}

	void StatsForm::displayGuessDistribution(const Model::Player* player, int row)
	{
		for (const auto& pair : player->getGuessDistribution())
		{
			this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->CustomLabels->Add(
				pair.first - 0.5, pair.first + 0.5, System::Convert::ToString(pair.first));
			int pointIndex = this->guessDistroChart->Series["Guess Distribution"]->Points->AddXY(
				pair.first, pair.second);
			if (pair.first == row)
			{
				this->guessDistroChart->Series["Guess Distribution"]->Points[pointIndex]->Color =
					System::Drawing::Color::Green;
			}
			else
			{
				this->guessDistroChart->Series["Guess Distribution"]->Points[pointIndex]->Color =
					System::Drawing::Color::Gray;
			}
		}
		this->returnButton->Focus();
	}

	void StatsForm::setUpBarChart()
	{
		this->guessDistroChart->Series->Clear();
		this->guessDistroChart->ChartAreas->Clear();
		this->guessDistroChart->ChartAreas->Add("Guess Distribution Area");
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->MajorGrid->Enabled = false;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisY->MajorGrid->Enabled = false;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisY->LabelStyle->Enabled = false;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisY->LineWidth = 0;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisY->MajorTickMark->Enabled = false;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->LineWidth = 0;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->MajorTickMark->Enabled = false;
		this->guessDistroChart->Series->Add("Guess Distribution");
		this->guessDistroChart->Series["Guess Distribution"]->ChartType =
			System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Bar;
		this->guessDistroChart->Series["Guess Distribution"]->IsValueShownAsLabel = true;
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->CustomLabels->Clear();
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->BackColor = System::Drawing::Color::Transparent;
	}

	void StatsForm::returnButton_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->Close();
	}

	void StatsForm::applyTheme(TeamGWordle::Theme theme)
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
		this->updateControlsColor(backColor, foreColor);
		this->guessDistroChart->Series["Guess Distribution"]->LabelForeColor = foreColor;
	}

	void StatsForm::updateControlsColor(const System::Drawing::Color& backColor,
	                                    const System::Drawing::Color& foreColor)
	{
		for each (Control^ control in this->Controls)
		{
			control->BackColor = backColor;
			control->ForeColor = foreColor;
		}
		this->guessDistroChart->ChartAreas["Guess Distribution Area"]->AxisX->LabelStyle->ForeColor = foreColor;
	}
}
