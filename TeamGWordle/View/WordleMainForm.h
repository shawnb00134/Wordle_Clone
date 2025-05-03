#pragma once
#include "../Controller/GameController.h"
#include "../Controller/SoundController.h"
using namespace controller;

/// <summary>
/// TeamGWordle namespace.
/// </summary>
namespace TeamGWordle
{
	/// <summary>
	/// Theme enum.
	/// </summary>
	enum class Theme { Light, Dark };

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Summary for WordleMainForm
	/// </summary>
	public ref class WordleMainForm : public System::Windows::Forms::Form
	{
	public:
		/// <summary>
		/// Initializes a new instance of the <see cref="WordleMainForm"/> class.
		/// </summary>
		WordleMainForm();

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~WordleMainForm();

	private:
		System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;

	private:
		System::Windows::Forms::Button^ buttonQ;

	private:
		System::Windows::Forms::Button^ buttonW;

	private:
		System::Windows::Forms::Button^ buttonR;

	private:
		System::Windows::Forms::Button^ buttonE;

	private:
		System::Windows::Forms::Button^ buttonI;

	private:
		System::Windows::Forms::Button^ buttonU;

	private:
		System::Windows::Forms::Button^ buttonY;

	private:
		System::Windows::Forms::Button^ buttonT;

	private:
		System::Windows::Forms::Button^ buttonP;

	private:
		System::Windows::Forms::Button^ buttonO;

	private:
		System::Windows::Forms::Button^ buttonL;

	private:
		System::Windows::Forms::Button^ buttonK;

	private:
		System::Windows::Forms::Button^ buttonJ;

	private:
		System::Windows::Forms::Button^ buttonH;

	private:
		System::Windows::Forms::Button^ buttonG;

	private:
		System::Windows::Forms::Button^ buttonF;

	private:
		System::Windows::Forms::Button^ buttonD;

	private:
		System::Windows::Forms::Button^ buttonS;

	private:
		System::Windows::Forms::Button^ buttonA;

	private:
		System::Windows::Forms::Button^ buttonM;

	private:
		System::Windows::Forms::Button^ buttonN;

	private:
		System::Windows::Forms::Button^ buttonB;

	private:
		System::Windows::Forms::Button^ buttonV;

	private:
		System::Windows::Forms::Button^ buttonC;

	private:
		System::Windows::Forms::Button^ buttonX;

	private:
		System::Windows::Forms::Button^ buttonZ;

	private:
		System::Windows::Forms::Button^ buttonEnter;

	private:
		System::Windows::Forms::Button^ buttonDelete;

	private:
		System::Windows::Forms::TextBox^ correctWord;

	private:
		System::Windows::Forms::Button^ newGameButton;

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

	private:
		System::Windows::Forms::Label^ label11;

	private:
		System::Windows::Forms::Label^ label15;

	private:
		System::Windows::Forms::Label^ label14;

	private:
		System::Windows::Forms::Label^ label13;

	private:
		System::Windows::Forms::Label^ label12;

	private:
		System::Windows::Forms::Label^ label65;

	private:
		System::Windows::Forms::Label^ label64;

	private:
		System::Windows::Forms::Label^ label63;

	private:
		System::Windows::Forms::Label^ label62;

	private:
		System::Windows::Forms::Label^ label61;

	private:
		System::Windows::Forms::Label^ label55;

	private:
		System::Windows::Forms::Label^ label54;

	private:
		System::Windows::Forms::Label^ label53;

	private:
		System::Windows::Forms::Label^ label52;

	private:
		System::Windows::Forms::Label^ label51;

	private:
		System::Windows::Forms::Label^ label45;

	private:
		System::Windows::Forms::Label^ label44;

	private:
		System::Windows::Forms::Label^ label43;

	private:
		System::Windows::Forms::Label^ label42;

	private:
		System::Windows::Forms::Label^ label41;

	private:
		System::Windows::Forms::Label^ label35;

	private:
		System::Windows::Forms::Label^ label34;

	private:
		System::Windows::Forms::Label^ label33;

	private:
		System::Windows::Forms::Label^ label32;

	private:
		System::Windows::Forms::Label^ label31;

	private:
		System::Windows::Forms::Label^ label25;

	private:
		System::Windows::Forms::Label^ label24;

	private:
		System::Windows::Forms::Label^ label23;

	private:
		System::Windows::Forms::Label^ label22;

	private:
		System::Windows::Forms::Label^ label21;

	private:
		System::Windows::Forms::MenuStrip^ menuStrip1;

	private:
		System::Windows::Forms::ToolStripMenuItem^ fileToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem^ menuItemShowStats;

	private:
		System::Windows::Forms::ToolStripMenuItem^ menuItemExit;

	private:
		System::Windows::Forms::ToolStripMenuItem^ menutItemNewGame;

	private:
		System::Windows::Forms::ToolStripMenuItem^ settingsToolStripMenuItem;

	private:
		System::Windows::Forms::ToolStripMenuItem^ menuItemDuplicateLetters;

	private:
		System::Windows::Forms::ToolStripMenuItem^ menuItemDarkTheme;

		controller::GameController* gameController;
		controller::SoundController* soundController;
		void onKeyPress(Object^ sender, KeyPressEventArgs^ e);
		void onKeyDown(Object^ sender, KeyEventArgs^ e);
		String^ inputBuffer;
		String^ username;
		int currentRow;
		int currentCol;
		array<System::Windows::Forms::Label^, 2>^ labels;
		List<Char>^ letters = gcnew List<Char>();
		bool isGameOver;
		Theme systemTheme;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->buttonQ = (gcnew System::Windows::Forms::Button());
			this->buttonW = (gcnew System::Windows::Forms::Button());
			this->buttonR = (gcnew System::Windows::Forms::Button());
			this->buttonE = (gcnew System::Windows::Forms::Button());
			this->buttonI = (gcnew System::Windows::Forms::Button());
			this->buttonU = (gcnew System::Windows::Forms::Button());
			this->buttonY = (gcnew System::Windows::Forms::Button());
			this->buttonT = (gcnew System::Windows::Forms::Button());
			this->buttonP = (gcnew System::Windows::Forms::Button());
			this->buttonO = (gcnew System::Windows::Forms::Button());
			this->buttonL = (gcnew System::Windows::Forms::Button());
			this->buttonK = (gcnew System::Windows::Forms::Button());
			this->buttonJ = (gcnew System::Windows::Forms::Button());
			this->buttonH = (gcnew System::Windows::Forms::Button());
			this->buttonG = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonD = (gcnew System::Windows::Forms::Button());
			this->buttonS = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonM = (gcnew System::Windows::Forms::Button());
			this->buttonN = (gcnew System::Windows::Forms::Button());
			this->buttonB = (gcnew System::Windows::Forms::Button());
			this->buttonV = (gcnew System::Windows::Forms::Button());
			this->buttonC = (gcnew System::Windows::Forms::Button());
			this->buttonX = (gcnew System::Windows::Forms::Button());
			this->buttonZ = (gcnew System::Windows::Forms::Button());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->buttonDelete = (gcnew System::Windows::Forms::Button());
			this->correctWord = (gcnew System::Windows::Forms::TextBox());
			this->newGameButton = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menutItemNewGame = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemShowStats = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemExit = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemDuplicateLetters = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuItemDarkTheme = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tableLayoutPanel1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->tableLayoutPanel1->ColumnCount = 5;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(
				System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(
				System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(
				System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(
				System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(
				System::Windows::Forms::SizeType::Percent,
				20)));
			this->tableLayoutPanel1->Controls->Add(this->label65, 4, 5);
			this->tableLayoutPanel1->Controls->Add(this->label64, 3, 5);
			this->tableLayoutPanel1->Controls->Add(this->label63, 2, 5);
			this->tableLayoutPanel1->Controls->Add(this->label62, 1, 5);
			this->tableLayoutPanel1->Controls->Add(this->label61, 0, 5);
			this->tableLayoutPanel1->Controls->Add(this->label55, 4, 4);
			this->tableLayoutPanel1->Controls->Add(this->label54, 3, 4);
			this->tableLayoutPanel1->Controls->Add(this->label53, 2, 4);
			this->tableLayoutPanel1->Controls->Add(this->label52, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label51, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->label45, 4, 3);
			this->tableLayoutPanel1->Controls->Add(this->label44, 3, 3);
			this->tableLayoutPanel1->Controls->Add(this->label43, 2, 3);
			this->tableLayoutPanel1->Controls->Add(this->label42, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label41, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->label35, 4, 2);
			this->tableLayoutPanel1->Controls->Add(this->label34, 3, 2);
			this->tableLayoutPanel1->Controls->Add(this->label33, 2, 2);
			this->tableLayoutPanel1->Controls->Add(this->label32, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label31, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->label25, 4, 1);
			this->tableLayoutPanel1->Controls->Add(this->label24, 3, 1);
			this->tableLayoutPanel1->Controls->Add(this->label23, 2, 1);
			this->tableLayoutPanel1->Controls->Add(this->label22, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label21, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label15, 4, 0);
			this->tableLayoutPanel1->Controls->Add(this->label14, 3, 0);
			this->tableLayoutPanel1->Controls->Add(this->label13, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->label12, 1, 0);
			this->tableLayoutPanel1->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(114, 48);
			this->tableLayoutPanel1->Margin = System::Windows::Forms::Padding(2);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 6;
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->RowStyles->Add(
				(gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 16.66667F)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(297, 361);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// label65
			// 
			this->label65->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label65->BackColor = System::Drawing::Color::White;
			this->label65->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label65->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label65->Location = System::Drawing::Point(248, 311);
			this->label65->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(37, 39);
			this->label65->TabIndex = 38;
			this->label65->Text = L"  ";
			this->label65->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label64
			// 
			this->label64->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label64->BackColor = System::Drawing::Color::White;
			this->label64->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label64->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label64->Location = System::Drawing::Point(188, 311);
			this->label64->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(37, 39);
			this->label64->TabIndex = 37;
			this->label64->Text = L"  ";
			this->label64->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label63
			// 
			this->label63->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label63->BackColor = System::Drawing::Color::White;
			this->label63->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label63->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label63->Location = System::Drawing::Point(129, 311);
			this->label63->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(37, 39);
			this->label63->TabIndex = 36;
			this->label63->Text = L"  ";
			this->label63->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label62
			// 
			this->label62->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label62->BackColor = System::Drawing::Color::White;
			this->label62->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label62->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label62->Location = System::Drawing::Point(70, 311);
			this->label62->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(37, 39);
			this->label62->TabIndex = 35;
			this->label62->Text = L"  ";
			this->label62->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label61
			// 
			this->label61->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label61->BackColor = System::Drawing::Color::White;
			this->label61->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label61->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label61->Location = System::Drawing::Point(11, 311);
			this->label61->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(37, 39);
			this->label61->TabIndex = 34;
			this->label61->Text = L"  ";
			this->label61->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label55
			// 
			this->label55->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label55->BackColor = System::Drawing::Color::White;
			this->label55->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label55->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label55->Location = System::Drawing::Point(248, 250);
			this->label55->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(37, 39);
			this->label55->TabIndex = 33;
			this->label55->Text = L"  ";
			this->label55->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label54
			// 
			this->label54->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label54->BackColor = System::Drawing::Color::White;
			this->label54->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label54->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label54->Location = System::Drawing::Point(188, 250);
			this->label54->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(37, 39);
			this->label54->TabIndex = 32;
			this->label54->Text = L"  ";
			this->label54->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label53
			// 
			this->label53->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label53->BackColor = System::Drawing::Color::White;
			this->label53->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label53->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label53->Location = System::Drawing::Point(129, 250);
			this->label53->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(37, 39);
			this->label53->TabIndex = 31;
			this->label53->Text = L"  ";
			this->label53->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label52
			// 
			this->label52->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label52->BackColor = System::Drawing::Color::White;
			this->label52->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label52->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label52->Location = System::Drawing::Point(70, 250);
			this->label52->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(37, 39);
			this->label52->TabIndex = 30;
			this->label52->Text = L"  ";
			this->label52->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label51
			// 
			this->label51->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label51->BackColor = System::Drawing::Color::White;
			this->label51->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label51->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label51->Location = System::Drawing::Point(11, 250);
			this->label51->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(37, 39);
			this->label51->TabIndex = 29;
			this->label51->Text = L"  ";
			this->label51->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label45
			// 
			this->label45->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label45->BackColor = System::Drawing::Color::White;
			this->label45->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label45->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label45->Location = System::Drawing::Point(248, 190);
			this->label45->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(37, 39);
			this->label45->TabIndex = 28;
			this->label45->Text = L"  ";
			this->label45->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label44
			// 
			this->label44->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label44->BackColor = System::Drawing::Color::White;
			this->label44->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label44->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label44->Location = System::Drawing::Point(188, 190);
			this->label44->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(37, 39);
			this->label44->TabIndex = 27;
			this->label44->Text = L"  ";
			this->label44->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label43
			// 
			this->label43->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label43->BackColor = System::Drawing::Color::White;
			this->label43->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label43->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label43->Location = System::Drawing::Point(129, 190);
			this->label43->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(37, 39);
			this->label43->TabIndex = 26;
			this->label43->Text = L"  ";
			this->label43->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label42
			// 
			this->label42->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label42->BackColor = System::Drawing::Color::White;
			this->label42->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label42->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label42->Location = System::Drawing::Point(70, 190);
			this->label42->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(37, 39);
			this->label42->TabIndex = 25;
			this->label42->Text = L"  ";
			this->label42->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label41
			// 
			this->label41->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label41->BackColor = System::Drawing::Color::White;
			this->label41->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(11, 190);
			this->label41->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(37, 39);
			this->label41->TabIndex = 24;
			this->label41->Text = L"  ";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label35
			// 
			this->label35->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label35->BackColor = System::Drawing::Color::White;
			this->label35->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(248, 130);
			this->label35->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(37, 39);
			this->label35->TabIndex = 23;
			this->label35->Text = L"  ";
			this->label35->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label34
			// 
			this->label34->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label34->BackColor = System::Drawing::Color::White;
			this->label34->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(188, 130);
			this->label34->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(37, 39);
			this->label34->TabIndex = 22;
			this->label34->Text = L"  ";
			this->label34->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label33
			// 
			this->label33->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label33->BackColor = System::Drawing::Color::White;
			this->label33->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(129, 130);
			this->label33->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(37, 39);
			this->label33->TabIndex = 21;
			this->label33->Text = L"  ";
			this->label33->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label32
			// 
			this->label32->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label32->BackColor = System::Drawing::Color::White;
			this->label32->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(70, 130);
			this->label32->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(37, 39);
			this->label32->TabIndex = 20;
			this->label32->Text = L"  ";
			this->label32->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label31
			// 
			this->label31->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label31->BackColor = System::Drawing::Color::White;
			this->label31->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(11, 130);
			this->label31->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(37, 39);
			this->label31->TabIndex = 19;
			this->label31->Text = L"  ";
			this->label31->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label25
			// 
			this->label25->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label25->BackColor = System::Drawing::Color::White;
			this->label25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(248, 70);
			this->label25->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(37, 39);
			this->label25->TabIndex = 18;
			this->label25->Text = L"  ";
			this->label25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label24
			// 
			this->label24->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label24->BackColor = System::Drawing::Color::White;
			this->label24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(188, 70);
			this->label24->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(37, 39);
			this->label24->TabIndex = 17;
			this->label24->Text = L"  ";
			this->label24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label23
			// 
			this->label23->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label23->BackColor = System::Drawing::Color::White;
			this->label23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(129, 70);
			this->label23->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(37, 39);
			this->label23->TabIndex = 16;
			this->label23->Text = L"  ";
			this->label23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label22
			// 
			this->label22->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label22->BackColor = System::Drawing::Color::White;
			this->label22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(70, 70);
			this->label22->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(37, 39);
			this->label22->TabIndex = 15;
			this->label22->Text = L"  ";
			this->label22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label21
			// 
			this->label21->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label21->BackColor = System::Drawing::Color::White;
			this->label21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(11, 70);
			this->label21->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(37, 39);
			this->label21->TabIndex = 14;
			this->label21->Text = L"  ";
			this->label21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label15
			// 
			this->label15->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label15->BackColor = System::Drawing::Color::White;
			this->label15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(248, 10);
			this->label15->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(37, 39);
			this->label15->TabIndex = 13;
			this->label15->Text = L"  ";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label14
			// 
			this->label14->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(188, 10);
			this->label14->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(37, 39);
			this->label14->TabIndex = 12;
			this->label14->Text = L"  ";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label13
			// 
			this->label13->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label13->BackColor = System::Drawing::Color::White;
			this->label13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(129, 10);
			this->label13->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(37, 39);
			this->label13->TabIndex = 11;
			this->label13->Text = L"  ";
			this->label13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label12
			// 
			this->label12->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label12->BackColor = System::Drawing::Color::White;
			this->label12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(70, 10);
			this->label12->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(37, 39);
			this->label12->TabIndex = 10;
			this->label12->Text = L"  ";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label11
			// 
			this->label11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label11->BackColor = System::Drawing::Color::White;
			this->label11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(11, 10);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(37, 39);
			this->label11->TabIndex = 9;
			this->label11->Text = L"  ";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// buttonQ
			// 
			this->buttonQ->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonQ->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonQ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonQ->Location = System::Drawing::Point(96, 418);
			this->buttonQ->Margin = System::Windows::Forms::Padding(2);
			this->buttonQ->Name = L"buttonQ";
			this->buttonQ->Size = System::Drawing::Size(30, 32);
			this->buttonQ->TabIndex = 2;
			this->buttonQ->TabStop = false;
			this->buttonQ->Text = L"Q";
			this->buttonQ->UseVisualStyleBackColor = false;
			this->buttonQ->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonW
			// 
			this->buttonW->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonW->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonW->Location = System::Drawing::Point(131, 418);
			this->buttonW->Margin = System::Windows::Forms::Padding(2);
			this->buttonW->Name = L"buttonW";
			this->buttonW->Size = System::Drawing::Size(30, 32);
			this->buttonW->TabIndex = 3;
			this->buttonW->TabStop = false;
			this->buttonW->Text = L"W";
			this->buttonW->UseVisualStyleBackColor = false;
			this->buttonW->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonR
			// 
			this->buttonR->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonR->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonR->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonR->Location = System::Drawing::Point(200, 418);
			this->buttonR->Margin = System::Windows::Forms::Padding(2);
			this->buttonR->Name = L"buttonR";
			this->buttonR->Size = System::Drawing::Size(30, 32);
			this->buttonR->TabIndex = 5;
			this->buttonR->TabStop = false;
			this->buttonR->Text = L"R";
			this->buttonR->UseVisualStyleBackColor = false;
			this->buttonR->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonE
			// 
			this->buttonE->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonE->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonE->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonE->Location = System::Drawing::Point(165, 418);
			this->buttonE->Margin = System::Windows::Forms::Padding(2);
			this->buttonE->Name = L"buttonE";
			this->buttonE->Size = System::Drawing::Size(30, 32);
			this->buttonE->TabIndex = 4;
			this->buttonE->TabStop = false;
			this->buttonE->Text = L"E";
			this->buttonE->UseVisualStyleBackColor = false;
			this->buttonE->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonI
			// 
			this->buttonI->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonI->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonI->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonI->Location = System::Drawing::Point(338, 418);
			this->buttonI->Margin = System::Windows::Forms::Padding(2);
			this->buttonI->Name = L"buttonI";
			this->buttonI->Size = System::Drawing::Size(30, 32);
			this->buttonI->TabIndex = 9;
			this->buttonI->TabStop = false;
			this->buttonI->Text = L"I";
			this->buttonI->UseVisualStyleBackColor = false;
			this->buttonI->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonU
			// 
			this->buttonU->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonU->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonU->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonU->Location = System::Drawing::Point(303, 418);
			this->buttonU->Margin = System::Windows::Forms::Padding(2);
			this->buttonU->Name = L"buttonU";
			this->buttonU->Size = System::Drawing::Size(30, 32);
			this->buttonU->TabIndex = 8;
			this->buttonU->TabStop = false;
			this->buttonU->Text = L"U";
			this->buttonU->UseVisualStyleBackColor = false;
			this->buttonU->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonY
			// 
			this->buttonY->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonY->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonY->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonY->Location = System::Drawing::Point(269, 418);
			this->buttonY->Margin = System::Windows::Forms::Padding(2);
			this->buttonY->Name = L"buttonY";
			this->buttonY->Size = System::Drawing::Size(30, 32);
			this->buttonY->TabIndex = 7;
			this->buttonY->TabStop = false;
			this->buttonY->Text = L"Y";
			this->buttonY->UseVisualStyleBackColor = false;
			this->buttonY->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonT
			// 
			this->buttonT->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonT->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonT->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonT->Location = System::Drawing::Point(234, 418);
			this->buttonT->Margin = System::Windows::Forms::Padding(2);
			this->buttonT->Name = L"buttonT";
			this->buttonT->Size = System::Drawing::Size(30, 32);
			this->buttonT->TabIndex = 6;
			this->buttonT->TabStop = false;
			this->buttonT->Text = L"T";
			this->buttonT->UseVisualStyleBackColor = false;
			this->buttonT->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonP
			// 
			this->buttonP->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonP->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonP->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonP->Location = System::Drawing::Point(407, 418);
			this->buttonP->Margin = System::Windows::Forms::Padding(2);
			this->buttonP->Name = L"buttonP";
			this->buttonP->Size = System::Drawing::Size(30, 32);
			this->buttonP->TabIndex = 11;
			this->buttonP->TabStop = false;
			this->buttonP->Text = L"P";
			this->buttonP->UseVisualStyleBackColor = false;
			this->buttonP->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonO
			// 
			this->buttonO->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonO->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonO->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonO->Location = System::Drawing::Point(372, 418);
			this->buttonO->Margin = System::Windows::Forms::Padding(2);
			this->buttonO->Name = L"buttonO";
			this->buttonO->Size = System::Drawing::Size(30, 32);
			this->buttonO->TabIndex = 10;
			this->buttonO->TabStop = false;
			this->buttonO->Text = L"O";
			this->buttonO->UseVisualStyleBackColor = false;
			this->buttonO->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonL
			// 
			this->buttonL->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonL->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonL->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonL->Location = System::Drawing::Point(386, 456);
			this->buttonL->Margin = System::Windows::Forms::Padding(2);
			this->buttonL->Name = L"buttonL";
			this->buttonL->Size = System::Drawing::Size(30, 32);
			this->buttonL->TabIndex = 20;
			this->buttonL->TabStop = false;
			this->buttonL->Text = L"L";
			this->buttonL->UseVisualStyleBackColor = false;
			this->buttonL->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonK
			// 
			this->buttonK->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonK->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonK->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonK->Location = System::Drawing::Point(351, 456);
			this->buttonK->Margin = System::Windows::Forms::Padding(2);
			this->buttonK->Name = L"buttonK";
			this->buttonK->Size = System::Drawing::Size(30, 32);
			this->buttonK->TabIndex = 19;
			this->buttonK->TabStop = false;
			this->buttonK->Text = L"K";
			this->buttonK->UseVisualStyleBackColor = false;
			this->buttonK->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonJ
			// 
			this->buttonJ->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonJ->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonJ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonJ->Location = System::Drawing::Point(317, 456);
			this->buttonJ->Margin = System::Windows::Forms::Padding(2);
			this->buttonJ->Name = L"buttonJ";
			this->buttonJ->Size = System::Drawing::Size(30, 32);
			this->buttonJ->TabIndex = 18;
			this->buttonJ->TabStop = false;
			this->buttonJ->Text = L"J";
			this->buttonJ->UseVisualStyleBackColor = false;
			this->buttonJ->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonH
			// 
			this->buttonH->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonH->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonH->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonH->Location = System::Drawing::Point(282, 456);
			this->buttonH->Margin = System::Windows::Forms::Padding(2);
			this->buttonH->Name = L"buttonH";
			this->buttonH->Size = System::Drawing::Size(30, 32);
			this->buttonH->TabIndex = 17;
			this->buttonH->TabStop = false;
			this->buttonH->Text = L"H";
			this->buttonH->UseVisualStyleBackColor = false;
			this->buttonH->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonG
			// 
			this->buttonG->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonG->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonG->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonG->Location = System::Drawing::Point(248, 456);
			this->buttonG->Margin = System::Windows::Forms::Padding(2);
			this->buttonG->Name = L"buttonG";
			this->buttonG->Size = System::Drawing::Size(30, 32);
			this->buttonG->TabIndex = 16;
			this->buttonG->TabStop = false;
			this->buttonG->Text = L"G";
			this->buttonG->UseVisualStyleBackColor = false;
			this->buttonG->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonF
			// 
			this->buttonF->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonF->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonF->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonF->Location = System::Drawing::Point(213, 456);
			this->buttonF->Margin = System::Windows::Forms::Padding(2);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(30, 32);
			this->buttonF->TabIndex = 15;
			this->buttonF->TabStop = false;
			this->buttonF->Text = L"F";
			this->buttonF->UseVisualStyleBackColor = false;
			this->buttonF->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonD
			// 
			this->buttonD->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonD->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonD->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonD->Location = System::Drawing::Point(179, 456);
			this->buttonD->Margin = System::Windows::Forms::Padding(2);
			this->buttonD->Name = L"buttonD";
			this->buttonD->Size = System::Drawing::Size(30, 32);
			this->buttonD->TabIndex = 14;
			this->buttonD->TabStop = false;
			this->buttonD->Text = L"D";
			this->buttonD->UseVisualStyleBackColor = false;
			this->buttonD->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonS
			// 
			this->buttonS->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonS->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonS->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonS->Location = System::Drawing::Point(144, 456);
			this->buttonS->Margin = System::Windows::Forms::Padding(2);
			this->buttonS->Name = L"buttonS";
			this->buttonS->Size = System::Drawing::Size(30, 32);
			this->buttonS->TabIndex = 13;
			this->buttonS->TabStop = false;
			this->buttonS->Text = L"S";
			this->buttonS->UseVisualStyleBackColor = false;
			this->buttonS->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonA
			// 
			this->buttonA->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonA->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonA->Location = System::Drawing::Point(110, 456);
			this->buttonA->Margin = System::Windows::Forms::Padding(2);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(30, 32);
			this->buttonA->TabIndex = 12;
			this->buttonA->TabStop = false;
			this->buttonA->Text = L"A";
			this->buttonA->UseVisualStyleBackColor = false;
			this->buttonA->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonM
			// 
			this->buttonM->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonM->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonM->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonM->Location = System::Drawing::Point(356, 493);
			this->buttonM->Margin = System::Windows::Forms::Padding(2);
			this->buttonM->Name = L"buttonM";
			this->buttonM->Size = System::Drawing::Size(30, 32);
			this->buttonM->TabIndex = 27;
			this->buttonM->TabStop = false;
			this->buttonM->Text = L"M";
			this->buttonM->UseVisualStyleBackColor = false;
			this->buttonM->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonN
			// 
			this->buttonN->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonN->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonN->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonN->Location = System::Drawing::Point(320, 493);
			this->buttonN->Margin = System::Windows::Forms::Padding(2);
			this->buttonN->Name = L"buttonN";
			this->buttonN->Size = System::Drawing::Size(30, 32);
			this->buttonN->TabIndex = 26;
			this->buttonN->TabStop = false;
			this->buttonN->Text = L"N";
			this->buttonN->UseVisualStyleBackColor = false;
			this->buttonN->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonB
			// 
			this->buttonB->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonB->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonB->Location = System::Drawing::Point(286, 493);
			this->buttonB->Margin = System::Windows::Forms::Padding(2);
			this->buttonB->Name = L"buttonB";
			this->buttonB->Size = System::Drawing::Size(30, 32);
			this->buttonB->TabIndex = 25;
			this->buttonB->TabStop = false;
			this->buttonB->Text = L"B";
			this->buttonB->UseVisualStyleBackColor = false;
			this->buttonB->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonV
			// 
			this->buttonV->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonV->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonV->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonV->Location = System::Drawing::Point(253, 493);
			this->buttonV->Margin = System::Windows::Forms::Padding(2);
			this->buttonV->Name = L"buttonV";
			this->buttonV->Size = System::Drawing::Size(30, 32);
			this->buttonV->TabIndex = 24;
			this->buttonV->TabStop = false;
			this->buttonV->Text = L"V";
			this->buttonV->UseVisualStyleBackColor = false;
			this->buttonV->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonC
			// 
			this->buttonC->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonC->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonC->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonC->Location = System::Drawing::Point(217, 493);
			this->buttonC->Margin = System::Windows::Forms::Padding(2);
			this->buttonC->Name = L"buttonC";
			this->buttonC->Size = System::Drawing::Size(30, 32);
			this->buttonC->TabIndex = 23;
			this->buttonC->TabStop = false;
			this->buttonC->Text = L"C";
			this->buttonC->UseVisualStyleBackColor = false;
			this->buttonC->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonX
			// 
			this->buttonX->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonX->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonX->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonX->Location = System::Drawing::Point(183, 493);
			this->buttonX->Margin = System::Windows::Forms::Padding(2);
			this->buttonX->Name = L"buttonX";
			this->buttonX->Size = System::Drawing::Size(30, 32);
			this->buttonX->TabIndex = 22;
			this->buttonX->TabStop = false;
			this->buttonX->Text = L"X";
			this->buttonX->UseVisualStyleBackColor = false;
			this->buttonX->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonZ
			// 
			this->buttonZ->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonZ->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonZ->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                   System::Drawing::FontStyle::Regular,
			                                                   System::Drawing::GraphicsUnit::Point,
			                                                   static_cast<System::Byte>(0)));
			this->buttonZ->Location = System::Drawing::Point(148, 493);
			this->buttonZ->Margin = System::Windows::Forms::Padding(2);
			this->buttonZ->Name = L"buttonZ";
			this->buttonZ->Size = System::Drawing::Size(30, 32);
			this->buttonZ->TabIndex = 21;
			this->buttonZ->TabStop = false;
			this->buttonZ->Text = L"Z";
			this->buttonZ->UseVisualStyleBackColor = false;
			this->buttonZ->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// buttonEnter
			// 
			this->buttonEnter->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonEnter->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                       System::Drawing::FontStyle::Bold,
			                                                       System::Drawing::GraphicsUnit::Point,
			                                                       static_cast<System::Byte>(0)));
			this->buttonEnter->Location = System::Drawing::Point(68, 493);
			this->buttonEnter->Margin = System::Windows::Forms::Padding(2);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(72, 32);
			this->buttonEnter->TabIndex = 1;
			this->buttonEnter->Text = L"ENTER";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonEnter_Click);
			// 
			// buttonDelete
			// 
			this->buttonDelete->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->buttonDelete->BackColor = System::Drawing::Color::Gainsboro;
			this->buttonDelete->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F,
			                                                        System::Drawing::FontStyle::Bold,
			                                                        System::Drawing::GraphicsUnit::Point,
			                                                        static_cast<System::Byte>(0)));
			this->buttonDelete->Location = System::Drawing::Point(393, 493);
			this->buttonDelete->Margin = System::Windows::Forms::Padding(2);
			this->buttonDelete->Name = L"buttonDelete";
			this->buttonDelete->Size = System::Drawing::Size(46, 32);
			this->buttonDelete->TabIndex = 2;
			this->buttonDelete->UseVisualStyleBackColor = false;
			this->buttonDelete->Click += gcnew System::EventHandler(this, &WordleMainForm::buttonClick);
			// 
			// correctWord
			// 
			this->correctWord->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12,
			                                                       System::Drawing::FontStyle::Bold,
			                                                       System::Drawing::GraphicsUnit::Point,
			                                                       static_cast<System::Byte>(0)));
			this->correctWord->Location = System::Drawing::Point(194, 546);
			this->correctWord->Name = L"correctWord";
			this->correctWord->Size = System::Drawing::Size(122, 26);
			this->correctWord->TabIndex = 30;
			this->correctWord->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// newGameButton
			// 
			this->newGameButton->Location = System::Drawing::Point(217, 583);
			this->newGameButton->Name = L"newGameButton";
			this->newGameButton->Size = System::Drawing::Size(75, 23);
			this->newGameButton->TabIndex = 3;
			this->newGameButton->TabStop = false;
			this->newGameButton->Text = L"New Game";
			this->newGameButton->UseVisualStyleBackColor = true;
			this->newGameButton->Click += gcnew System::EventHandler(this, &WordleMainForm::newGameButton_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array<System::Windows::Forms::ToolStripItem^>(2){
				this->fileToolStripMenuItem,
				this->settingsToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(513, 24);
			this->menuStrip1->TabIndex = 31;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->DropDownItems->AddRange(
				gcnew cli::array<System::Windows::Forms::ToolStripItem^>(3){
					this->menutItemNewGame,
					this->menuItemShowStats, this->menuItemExit
				});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// menutItemNewGame
			// 
			this->menutItemNewGame->Name = L"menutItemNewGame";
			this->menutItemNewGame->Size = System::Drawing::Size(132, 22);
			this->menutItemNewGame->Text = L"New Game";
			this->menutItemNewGame->Click += gcnew System::EventHandler(this, &WordleMainForm::menutItemNewGame_Click);
			// 
			// menuItemShowStats
			// 
			this->menuItemShowStats->Name = L"menuItemShowStats";
			this->menuItemShowStats->Size = System::Drawing::Size(132, 22);
			this->menuItemShowStats->Text = L"Show Stats";
			this->menuItemShowStats->Click += gcnew
				System::EventHandler(this, &WordleMainForm::menuItemShowStats_Click);
			// 
			// menuItemExit
			// 
			this->menuItemExit->Name = L"menuItemExit";
			this->menuItemExit->Size = System::Drawing::Size(132, 22);
			this->menuItemExit->Text = L"Exit";
			this->menuItemExit->Click += gcnew System::EventHandler(this, &WordleMainForm::menuItemExit_Click);
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->DropDownItems->AddRange(
				gcnew cli::array<System::Windows::Forms::ToolStripItem^>(2){
					this->menuItemDuplicateLetters,
					this->menuItemDarkTheme
				});
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// menuItemDuplicateLetters
			// 
			this->menuItemDuplicateLetters->CheckOnClick = true;
			this->menuItemDuplicateLetters->Name = L"menuItemDuplicateLetters";
			this->menuItemDuplicateLetters->Size = System::Drawing::Size(162, 22);
			this->menuItemDuplicateLetters->Text = L"Duplicate Letters";
			this->menuItemDuplicateLetters->CheckedChanged += gcnew System::EventHandler(
				this, &WordleMainForm::menuItemDuplicateLetters_CheckedChanged);
			// 
			// menuItemDarkTheme
			// 
			this->menuItemDarkTheme->CheckOnClick = true;
			this->menuItemDarkTheme->Name = L"menuItemDarkTheme";
			this->menuItemDarkTheme->Size = System::Drawing::Size(162, 22);
			this->menuItemDarkTheme->Text = L"Dark Theme";
			this->menuItemDarkTheme->CheckedChanged += gcnew System::EventHandler(
				this, &WordleMainForm::menuItemDarkTheme_CheckedChanged);
			// 
			// WordleMainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(513, 618);
			this->Controls->Add(this->newGameButton);
			this->Controls->Add(this->correctWord);
			this->Controls->Add(this->buttonDelete);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->buttonM);
			this->Controls->Add(this->buttonN);
			this->Controls->Add(this->buttonB);
			this->Controls->Add(this->buttonV);
			this->Controls->Add(this->buttonC);
			this->Controls->Add(this->buttonX);
			this->Controls->Add(this->buttonZ);
			this->Controls->Add(this->buttonL);
			this->Controls->Add(this->buttonK);
			this->Controls->Add(this->buttonJ);
			this->Controls->Add(this->buttonH);
			this->Controls->Add(this->buttonG);
			this->Controls->Add(this->buttonF);
			this->Controls->Add(this->buttonD);
			this->Controls->Add(this->buttonS);
			this->Controls->Add(this->buttonA);
			this->Controls->Add(this->buttonP);
			this->Controls->Add(this->buttonO);
			this->Controls->Add(this->buttonI);
			this->Controls->Add(this->buttonU);
			this->Controls->Add(this->buttonY);
			this->Controls->Add(this->buttonT);
			this->Controls->Add(this->buttonR);
			this->Controls->Add(this->buttonE);
			this->Controls->Add(this->buttonW);
			this->Controls->Add(this->buttonQ);
			this->Controls->Add(this->tableLayoutPanel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->MinimumSize = System::Drawing::Size(528, 653);
			this->Name = L"WordleMainForm";
			this->Text = L"TeamGWordle - Aayush Adhikari & Shawn Bretthauer";
			this->tableLayoutPanel1->ResumeLayout(false);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();
		}

		void newGameButton_Click(System::Object^ sender, System::EventArgs^ e);
		void menutItemNewGame_Click(System::Object^ sender, System::EventArgs^ e);
		void menuItemExit_Click(System::Object^ sender, System::EventArgs^ e);
		void menuItemDuplicateLetters_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		void setLetterReuseAtStart();
		void enterButtonEnable();
		void endGame();
		void buttonClick(Object^ sender, EventArgs^ e);
		void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e);
		void wordValidGamePlay();
		void checkGamePlayStatus();
		void processCharacterInput(Char ch);
		void resetBoards();
		void getUsernameFromLogin();
		void updateButtonColor(Char c, Color color);
		void resetButtonColor();
		void displayStats();
		void menuItemShowStats_Click(System::Object^ sender, System::EventArgs^ e);
		void applyTheme(Theme theme);
		void menuItemDarkTheme_CheckedChanged(System::Object^ sender, System::EventArgs^ e);
		void enableCorrectWordDisplay(bool enable, Color color);
		void enableCorrectWordDisplay() { this->enableCorrectWordDisplay(false, Color::Black); }
		void setDelButtonImage();
#pragma endregion
	};
}
