#pragma once
#include "../Model/Player.h"
#include "WordleMainForm.h"


namespace View
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StatsForm
	/// </summary>
	public ref class StatsForm : public System::Windows::Forms::Form
	{
	public:
		/// <summary>
		///	Default constructor
		///	</summary>
		/// <param name="player">The player whose statistics are to be displayed.</param>
		///	<param name="row">The row number of the guess distribution.</param>
		StatsForm(const Model::Player* player, int row);
		/// <summary>
		/// Function to apply theme to the form
		/// </summary>
		/// <param name="theme"> Theme to be applied to the form</param>
		void applyTheme(TeamGWordle::Theme theme);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~StatsForm();

	private:
		System::Windows::Forms::Label^ label5;

	private:
		System::Windows::Forms::Label^ label6;

	private:
		System::Windows::Forms::Label^ label7;

	private:
		System::Windows::Forms::Label^ label8;

	private:
		System::Windows::Forms::Label^ label9;

	private:
		System::Windows::Forms::Label^ gamePlayLabel;

	private:
		System::Windows::Forms::Label^ label4;

	private:
		System::Windows::Forms::Label^ maxStreakLabel;

	private:
		System::Windows::Forms::Label^ currStreakLabel;

	private:
		System::Windows::Forms::Label^ winPercentLabel;

	private:
		System::Windows::Forms::DataVisualization::Charting::Chart^ guessDistroChart;

	private:
		System::Windows::Forms::Button^ returnButton;

	private:
		System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->gamePlayLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->maxStreakLabel = (gcnew System::Windows::Forms::Label());
			this->currStreakLabel = (gcnew System::Windows::Forms::Label());
			this->winPercentLabel = (gcnew System::Windows::Forms::Label());
			this->guessDistroChart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->returnButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guessDistroChart))->BeginInit();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(52, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Played";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(143, 96);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(37, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Win %";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(222, 94);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Current Streak";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(318, 95);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(61, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Max Streak";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F,
			                                                  System::Drawing::FontStyle::Bold,
			                                                  System::Drawing::GraphicsUnit::Point,
			                                                  static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(166, 20);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(101, 18);
			this->label9->TabIndex = 8;
			this->label9->Text = L"STATISTICS";
			// 
			// gamePlayLabel
			// 
			this->gamePlayLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->gamePlayLabel->AutoSize = true;
			this->gamePlayLabel->BackColor = System::Drawing::Color::White;
			this->gamePlayLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->gamePlayLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18,
			                                                         System::Drawing::FontStyle::Regular,
			                                                         System::Drawing::GraphicsUnit::Point,
			                                                         static_cast<System::Byte>(0)));
			this->gamePlayLabel->Location = System::Drawing::Point(56, 58);
			this->gamePlayLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->gamePlayLabel->Name = L"gamePlayLabel";
			this->gamePlayLabel->Size = System::Drawing::Size(27, 31);
			this->gamePlayLabel->TabIndex = 10;
			this->gamePlayLabel->Text = L"  ";
			this->gamePlayLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F,
			                                                  System::Drawing::FontStyle::Bold,
			                                                  System::Drawing::GraphicsUnit::Point,
			                                                  static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(119, 150);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 18);
			this->label4->TabIndex = 14;
			this->label4->Text = L"GUESS DISTRIBUTION";
			// 
			// maxStreakLabel
			// 
			this->maxStreakLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->maxStreakLabel->AutoSize = true;
			this->maxStreakLabel->BackColor = System::Drawing::Color::White;
			this->maxStreakLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->maxStreakLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18,
			                                                          System::Drawing::FontStyle::Regular,
			                                                          System::Drawing::GraphicsUnit::Point,
			                                                          static_cast<System::Byte>(0)));
			this->maxStreakLabel->Location = System::Drawing::Point(331, 58);
			this->maxStreakLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->maxStreakLabel->Name = L"maxStreakLabel";
			this->maxStreakLabel->Size = System::Drawing::Size(27, 31);
			this->maxStreakLabel->TabIndex = 15;
			this->maxStreakLabel->Text = L"  ";
			this->maxStreakLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// currStreakLabel
			// 
			this->currStreakLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->currStreakLabel->AutoSize = true;
			this->currStreakLabel->BackColor = System::Drawing::Color::White;
			this->currStreakLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->currStreakLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18,
			                                                           System::Drawing::FontStyle::Regular,
			                                                           System::Drawing::GraphicsUnit::Point,
			                                                           static_cast<System::Byte>(0)));
			this->currStreakLabel->Location = System::Drawing::Point(240, 58);
			this->currStreakLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->currStreakLabel->Name = L"currStreakLabel";
			this->currStreakLabel->Size = System::Drawing::Size(27, 31);
			this->currStreakLabel->TabIndex = 16;
			this->currStreakLabel->Text = L"  ";
			this->currStreakLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// winPercentLabel
			// 
			this->winPercentLabel->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->winPercentLabel->AutoSize = true;
			this->winPercentLabel->BackColor = System::Drawing::Color::White;
			this->winPercentLabel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->winPercentLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18,
			                                                           System::Drawing::FontStyle::Regular,
			                                                           System::Drawing::GraphicsUnit::Point,
			                                                           static_cast<System::Byte>(0)));
			this->winPercentLabel->Location = System::Drawing::Point(146, 58);
			this->winPercentLabel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->winPercentLabel->Name = L"winPercentLabel";
			this->winPercentLabel->Size = System::Drawing::Size(27, 31);
			this->winPercentLabel->TabIndex = 17;
			this->winPercentLabel->Text = L"  ";
			this->winPercentLabel->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// guessDistroChart
			// 
			this->guessDistroChart->BackColor = System::Drawing::SystemColors::Control;
			this->guessDistroChart->BorderlineColor = System::Drawing::SystemColors::Control;
			this->guessDistroChart->Location = System::Drawing::Point(-1, 171);
			this->guessDistroChart->Name = L"guessDistroChart";
			this->guessDistroChart->Size = System::Drawing::Size(476, 251);
			this->guessDistroChart->TabIndex = 18;
			// 
			// returnButton
			// 
			this->returnButton->Location = System::Drawing::Point(169, 426);
			this->returnButton->Name = L"returnButton";
			this->returnButton->Size = System::Drawing::Size(75, 23);
			this->returnButton->TabIndex = 1;
			this->returnButton->Text = L"Go Back";
			this->returnButton->UseVisualStyleBackColor = true;
			this->returnButton->Click += gcnew System::EventHandler(this, &StatsForm::returnButton_Click);
			// 
			// StatsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(477, 452);
			this->Controls->Add(this->returnButton);
			this->Controls->Add(this->guessDistroChart);
			this->Controls->Add(this->winPercentLabel);
			this->Controls->Add(this->currStreakLabel);
			this->Controls->Add(this->maxStreakLabel);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->gamePlayLabel);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"StatsForm";
			this->Text = L"Statistics";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->guessDistroChart))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

	private:
		void updateStatistics(const Model::Player* player, int row);
		void displayGuessDistribution(const Model::Player* player, int row);
		void setUpBarChart();
		void returnButton_Click(System::Object^ sender, System::EventArgs^ e);
		void updateControlsColor(const System::Drawing::Color& backColor, const System::Drawing::Color& foreColor);

#pragma endregion
	};
}
