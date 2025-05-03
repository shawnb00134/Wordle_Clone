#pragma once
#include "UserLogin.h"
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
	/// Summary for UserLogin
	/// </summary>
	public ref class UserLogin : public System::Windows::Forms::Form
	{
	public:
		/// <summary>
		/// Default constructor for userlogin form
		/// </summary>
		UserLogin();
		/// <summary>
		///	Function to get the userName entered in the form
		///	</summary>
		///	<returns>Username entered in the form</returns>
		String^ getUsername();
		/// <summary>
		///	Function to apply theme to the form
		///	<param name="theme">Theme to be applied</param>
		///	</summary>
		void applyTheme(TeamGWordle::Theme theme);

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~UserLogin();

	private:
		String^ username;

		System::Windows::Forms::TextBox^ textBoxUsername;
		System::Windows::Forms::Button^ buttonStart;

		System::Windows::Forms::Label^ label2;
		System::Windows::Forms::Label^ label1;

	protected:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(153, 64);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(2);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(165, 26);
			this->textBoxUsername->TabIndex = 1;
			// 
			// buttonStart
			// 
			this->buttonStart->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonStart->Location = System::Drawing::Point(106, 124);
			this->buttonStart->Margin = System::Windows::Forms::Padding(2);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(145, 26);
			this->buttonStart->TabIndex = 6;
			this->buttonStart->Text = L"Start New Game";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &UserLogin::buttonStart_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(102, 24);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(151, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Welcome to Wordle!";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(65, 70);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(59, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name: ";
			// 
			// UserLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(368, 161);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"UserLogin";
			this->Text = L"UserLogin";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void buttonStart_Click(System::Object^ sender, System::EventArgs^ e);
		void updateControlColor(const System::Drawing::Color& backColor, const System::Drawing::Color& foreColor);
	};
}
