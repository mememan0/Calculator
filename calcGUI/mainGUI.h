#pragma once
#include <msclr\marshal_cppstd.h>
#include <string> 
#include <sstream>
#include <stdlib.h>
#include <bitset>
using namespace System::Runtime::InteropServices;

namespace calcGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::TextBox^  outputBox;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	public: System::Windows::Forms::Button^  button10;
	private:

	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  backspace;

	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::RichTextBox^  logBox;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;

	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::Button^  button26;
	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Button^  button33;
	private: System::Windows::Forms::Button^  button34;
	private: System::Windows::Forms::Button^  button35;
	private: System::Windows::Forms::Button^  button36;



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->outputBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->backspace = (gcnew System::Windows::Forms::Button());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->logBox = (gcnew System::Windows::Forms::RichTextBox());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->button26 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button34 = (gcnew System::Windows::Forms::Button());
			this->button35 = (gcnew System::Windows::Forms::Button());
			this->button36 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// outputBox
			// 
			this->outputBox->BackColor = System::Drawing::Color::White;
			this->outputBox->Font = (gcnew System::Drawing::Font(L"Rockwell", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->outputBox->Location = System::Drawing::Point(16, 346);
			this->outputBox->Name = L"outputBox";
			this->outputBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->outputBox->Size = System::Drawing::Size(930, 92);
			this->outputBox->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(420, 794);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 75);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button2->Location = System::Drawing::Point(544, 794);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 75);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button3->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button3->Location = System::Drawing::Point(668, 794);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(100, 75);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button4->Location = System::Drawing::Point(420, 691);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 75);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button5->Location = System::Drawing::Point(544, 691);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(100, 75);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button6->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button6->Location = System::Drawing::Point(668, 691);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(100, 75);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button7->Location = System::Drawing::Point(420, 585);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(100, 75);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button8->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button8->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button8->Location = System::Drawing::Point(544, 585);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(100, 75);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button9->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button9->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button9->Location = System::Drawing::Point(668, 585);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(100, 75);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button10->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button10->Location = System::Drawing::Point(814, 718);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(130, 249);
			this->button10->TabIndex = 10;
			this->button10->Text = L"= (Exec)";
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button11->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button11->Location = System::Drawing::Point(814, 585);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(130, 105);
			this->button11->TabIndex = 11;
			this->button11->Text = L"AC Reset";
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button12->Location = System::Drawing::Point(420, 891);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(100, 75);
			this->button12->TabIndex = 12;
			this->button12->Text = L"0";
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button13->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button13->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button13->Location = System::Drawing::Point(420, 465);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(100, 75);
			this->button13->TabIndex = 13;
			this->button13->Text = L"(";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button14->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button14->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button14->Location = System::Drawing::Point(544, 465);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(100, 75);
			this->button14->TabIndex = 14;
			this->button14->Text = L")";
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click);
			// 
			// backspace
			// 
			this->backspace->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->backspace->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->backspace->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->backspace->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backspace->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->backspace->Location = System::Drawing::Point(668, 465);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(278, 75);
			this->backspace->TabIndex = 15;
			this->backspace->Text = L"Back Space";
			this->backspace->UseVisualStyleBackColor = false;
			this->backspace->Click += gcnew System::EventHandler(this, &MyForm::button15_Click);
			// 
			// button16
			// 
			this->button16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button16->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button16->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button16->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button16->Location = System::Drawing::Point(16, 465);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(212, 98);
			this->button16->TabIndex = 16;
			this->button16->Text = L"MEM Clear";
			this->button16->UseVisualStyleBackColor = false;
			this->button16->Click += gcnew System::EventHandler(this, &MyForm::button16_Click);
			// 
			// logBox
			// 
			this->logBox->BackColor = System::Drawing::Color::Black;
			this->logBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->logBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logBox->ForeColor = System::Drawing::Color::Yellow;
			this->logBox->Location = System::Drawing::Point(18, 17);
			this->logBox->Name = L"logBox";
			this->logBox->ReadOnly = true;
			this->logBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->logBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->logBox->Size = System::Drawing::Size(930, 298);
			this->logBox->TabIndex = 17;
			this->logBox->Text = L"";
			this->logBox->Click += gcnew System::EventHandler(this, &MyForm::logBox_Click);
			this->logBox->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button15->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button15->Location = System::Drawing::Point(260, 465);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(130, 98);
			this->button15->TabIndex = 18;
			this->button15->Text = L"MEM Store";
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button17
			// 
			this->button17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button17->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button17->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button17->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button17->Location = System::Drawing::Point(276, 585);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(100, 75);
			this->button17->TabIndex = 19;
			this->button17->Text = L"/";
			this->button17->UseVisualStyleBackColor = false;
			this->button17->Click += gcnew System::EventHandler(this, &MyForm::button17_Click);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button18->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button18->Location = System::Drawing::Point(276, 691);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(100, 75);
			this->button18->TabIndex = 20;
			this->button18->Text = L"*";
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button19->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button19->Location = System::Drawing::Point(276, 794);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(100, 75);
			this->button19->TabIndex = 21;
			this->button19->Text = L"-";
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button20->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button20->Location = System::Drawing::Point(276, 891);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(100, 75);
			this->button20->TabIndex = 22;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button22->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button22->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button22->Location = System::Drawing::Point(16, 588);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(212, 98);
			this->button22->TabIndex = 24;
			this->button22->Text = L"MEM Recall";
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button23->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button23->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button23->Location = System::Drawing::Point(16, 718);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(212, 98);
			this->button23->TabIndex = 25;
			this->button23->Text = L"Conversions";
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button24->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button24->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button24->Location = System::Drawing::Point(16, 854);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(212, 98);
			this->button24->TabIndex = 26;
			this->button24->Text = L"Get Last Calculation";
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button21->Location = System::Drawing::Point(978, 32);
			this->button21->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(315, 97);
			this->button21->TabIndex = 27;
			this->button21->Text = L"Convert Decimal To HEX";
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button25->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button25->Location = System::Drawing::Point(978, 138);
			this->button25->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(315, 97);
			this->button25->TabIndex = 28;
			this->button25->Text = L"Convert Decimal To BINARY";
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button26
			// 
			this->button26->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button26->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button26->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button26->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button26->Location = System::Drawing::Point(978, 245);
			this->button26->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button26->Name = L"button26";
			this->button26->Size = System::Drawing::Size(315, 97);
			this->button26->TabIndex = 32;
			this->button26->Text = L"Convert Decimal To OCTAL";
			this->button26->UseVisualStyleBackColor = false;
			this->button26->Click += gcnew System::EventHandler(this, &MyForm::button26_Click);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button27->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button27->Location = System::Drawing::Point(978, 351);
			this->button27->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(315, 97);
			this->button27->TabIndex = 31;
			this->button27->Text = L"Convert HEX to Decimal";
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button28
			// 
			this->button28->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button28->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button28->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button28->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button28->Location = System::Drawing::Point(978, 457);
			this->button28->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(315, 97);
			this->button28->TabIndex = 30;
			this->button28->Text = L"Convert BINARY to Decimal";
			this->button28->UseVisualStyleBackColor = false;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// button29
			// 
			this->button29->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button29->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button29->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button29->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button29->Location = System::Drawing::Point(978, 563);
			this->button29->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button29->Name = L"button29";
			this->button29->Size = System::Drawing::Size(315, 97);
			this->button29->TabIndex = 29;
			this->button29->Text = L"Convert OCTAL to Decimal";
			this->button29->UseVisualStyleBackColor = false;
			this->button29->Click += gcnew System::EventHandler(this, &MyForm::button29_Click);
			// 
			// button30
			// 
			this->button30->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button30->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button30->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button30->Location = System::Drawing::Point(1197, 832);
			this->button30->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button30->Name = L"button30";
			this->button30->Size = System::Drawing::Size(99, 88);
			this->button30->TabIndex = 38;
			this->button30->Text = L"F";
			this->button30->UseVisualStyleBackColor = false;
			this->button30->Click += gcnew System::EventHandler(this, &MyForm::button30_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button31->Location = System::Drawing::Point(1089, 832);
			this->button31->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(99, 88);
			this->button31->TabIndex = 37;
			this->button31->Text = L"E";
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button32->Location = System::Drawing::Point(981, 832);
			this->button32->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(99, 88);
			this->button32->TabIndex = 36;
			this->button32->Text = L"D";
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// button33
			// 
			this->button33->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button33->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button33->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button33->Location = System::Drawing::Point(1197, 735);
			this->button33->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(99, 88);
			this->button33->TabIndex = 35;
			this->button33->Text = L"C";
			this->button33->UseVisualStyleBackColor = false;
			this->button33->Click += gcnew System::EventHandler(this, &MyForm::button33_Click);
			// 
			// button34
			// 
			this->button34->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button34->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button34->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button34->Location = System::Drawing::Point(1089, 735);
			this->button34->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button34->Name = L"button34";
			this->button34->Size = System::Drawing::Size(99, 88);
			this->button34->TabIndex = 34;
			this->button34->Text = L"B";
			this->button34->UseVisualStyleBackColor = false;
			this->button34->Click += gcnew System::EventHandler(this, &MyForm::button34_Click);
			// 
			// button35
			// 
			this->button35->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button35->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button35->Font = (gcnew System::Drawing::Font(L"Rockwell", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button35->Location = System::Drawing::Point(981, 735);
			this->button35->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->button35->Name = L"button35";
			this->button35->Size = System::Drawing::Size(99, 88);
			this->button35->TabIndex = 33;
			this->button35->Text = L"A";
			this->button35->UseVisualStyleBackColor = false;
			this->button35->Click += gcnew System::EventHandler(this, &MyForm::button35_Click);
			// 
			// button36
			// 
			this->button36->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->button36->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->button36->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button36->Font = (gcnew System::Drawing::Font(L"Rockwell", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button36->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button36->Location = System::Drawing::Point(668, 892);
			this->button36->Name = L"button36";
			this->button36->Size = System::Drawing::Size(100, 75);
			this->button36->TabIndex = 39;
			this->button36->Text = L"(-)";
			this->button36->UseVisualStyleBackColor = false;
			this->button36->Click += gcnew System::EventHandler(this, &MyForm::button36_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(1311, 988);
			this->Controls->Add(this->button36);
			this->Controls->Add(this->button30);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button34);
			this->Controls->Add(this->button35);
			this->Controls->Add(this->button26);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->button28);
			this->Controls->Add(this->button29);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button17);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->logBox);
			this->Controls->Add(this->button16);
			this->Controls->Add(this->backspace);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->outputBox);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


		const char * expressionToParse; // Set globals
		String ^ memoryStorage;
		String ^ memoryCalculation;



		char currentChar() { // Return the current charater in the expression

			return *expressionToParse; //Using pointers
		}

		char getNextChar() { // Advance to the next character in the expression
			return *expressionToParse++;
		}


		double number() // Process numbers
		{
			double result = getNextChar() - '0'; 
			while (currentChar() >= '0' && currentChar() <= '9')
			{
				result = 10 * result + getNextChar() - '0';
			}
			return result;
		}

		double factor()
		{
			if (currentChar() >= '0' && currentChar() <= '9')// Is the current character a number 
				return number();
			else if (currentChar() == '(') // Is the current character a bracket
			{
				getNextChar(); // '('
				double iteration = calculate2(); // Iterate this entire thing to process the inside of brackets
				getNextChar(); // ')'
				return iteration;
			}
			else if (currentChar() == '-') // Allow for negative values
			{
				getNextChar();
				return -factor();
			}
			return 0; // On error (eg invalid input) return 0 like a normal calculator
		}


		double term()
		{
			double output = factor();
			while (currentChar() == '*' || currentChar() == '/') // PRoccess * and /
				if (getNextChar() == '*')
					output *= factor(); // Do maths
				else
					output = output / (1.0 * factor()); // Bug Fix: Allow divided values to be reprosented 
			return output;
		};

		double calculate2() { 
			double output = term();
			while (currentChar() == '+' || currentChar() == '-') // Process + and - 
				if (getNextChar() == '+')
					output += term(); // Do maths
				else
					output -= term();
			return output; // Return the final answer
		}


		String ^ convBase(int number, int base) {
			String ^ bases = "0123456789ABCDEF";
			String ^ result = "";
			while (number > 0) {
				result = bases[number%base] + result;
				number /= base;
			}
			return result;
		}



	public: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) { //Button Exec 
		logBox->AppendText("\n");
		const char * inputValue = (const char*)(void*) // Convert string ^ to char
		Marshal::StringToHGlobalAnsi(outputBox->Text);
		logBox->AppendText(outputBox->Text + "\n"); // Append the calculation to the log box
		memoryCalculation = outputBox->Text; // Add to last calculation
		expressionToParse = (inputValue); //Input the calcuation
		double result = calculate2(); // Calculate it
		outputBox->ResetText(); // Reset the output box
		System::String^ outString = result.ToString(); //Convert double to string ^

		outputBox->AppendText(outString);
		logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log
	}

	private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		logBox->SelectionStart = logBox->TextLength;	//Scroll box to bottom
		// scroll it automatically
		logBox->ScrollToCaret();
	}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) { //Button 1
		outputBox->AppendText("1");
	}
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) { //Backspace
		System::String^ textBoxValue = outputBox->Text;

		if (textBoxValue->Length > 1) {
			textBoxValue = textBoxValue->Substring(0, textBoxValue->Length - 1);
		}
		else {
			textBoxValue = "";
		}

		outputBox->Text = textBoxValue;
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) { //Button 2
		outputBox->AppendText("2");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) { //Button3
		outputBox->AppendText("3");
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //Button 4
		outputBox->AppendText("4");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { //Button 5
		outputBox->AppendText("5");
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { //Button 6
		outputBox->AppendText("6");
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) { //Button 7
		outputBox->AppendText("7");
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { //Button 8
		outputBox->AppendText("8");
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) { //Button 9
		outputBox->AppendText("9");
	}
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {//Button 0
		outputBox->AppendText("0");
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) { //Button +
		outputBox->AppendText("+");
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) { //Button -
		outputBox->AppendText("-");
	}
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) { //Button *
		outputBox->AppendText("*");
	}
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) { //Button /
		outputBox->AppendText("/");
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) { //Button (
		outputBox->AppendText("(");
	}
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e) { //Button )
		outputBox->AppendText(")");
	}
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) { //Reset Calc

		outputBox->ResetText(); // Clear all the memorys
		logBox->AppendText("Memory Cleared\n");
		memoryStorage = "";
		logBox->AppendText("Last Calculation Cleared\n");
		memoryCalculation = "";
		logBox->AppendText("-------------------RESET-------------------\n");

	}

	private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) { // Memory Store
		logBox->AppendText("Value Stored In Memory\n");
		memoryStorage = outputBox->Text; //Store item in box to memory


	}

	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) { // Memory Recall
		
		try {
			logBox->AppendText("Memory Recall\n");
			outputBox->AppendText(memoryStorage); //Recall item to box

		}
		catch (...) {
			logBox->AppendText("ERROR: The Memory Is Empty!\n");
		}
		

	}

	private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) { // Last Calculation
		try {
			logBox->AppendText("Last Calculation Recall\n");
			outputBox->AppendText(memoryCalculation);
		}
		catch (...) {
			logBox->AppendText("ERROR: The Memory Is Empty!\n");

		}
		
	}
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) {
		logBox->AppendText("Memory Cleared\n");
		memoryStorage = "";
	}
	private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {// Conversions
		
		if (MyForm::Width == 890) {
			logBox->AppendText("Closing Conversions Pane...\n");
			MyForm::Width -= 230;
			button10->Enabled = true;
			button14->Enabled = true;
			button13->Enabled = true;
			button17->Enabled = true;
			button18->Enabled = true;
			button19->Enabled = true;
			button20->Enabled = true;
			logBox->AppendText("Conversion Result Cleared\n");
			outputBox->ResetText();


		}
		else{
			MyForm::Width += 230;
			logBox->AppendText("Opening Conversions Pane...\n");
			button10->Enabled = false;
			button14->Enabled = false;
			button13->Enabled = false;
			button17->Enabled = false;
			button18->Enabled = false;
			button19->Enabled = false;
			button20->Enabled = false;
		}
	}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) { // On form load disable the conversions tab

	MyForm::Width -= 230;
	button10->Enabled = true;
	button14->Enabled = true;
	button13->Enabled = true;
	button17->Enabled = true;
	button18->Enabled = true;
	button19->Enabled = true;
	button20->Enabled = true;
	logBox->AppendText("Ready.\n");

}
private: System::Void button35_Click(System::Object^  sender, System::EventArgs^  e) {// A
	outputBox->AppendText("A");

}
private: System::Void button34_Click(System::Object^  sender, System::EventArgs^  e) { //B
	outputBox->AppendText("B");

}
private: System::Void button33_Click(System::Object^  sender, System::EventArgs^  e) {// C
	outputBox->AppendText("C");

}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {// D
	outputBox->AppendText("D");

}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {// E
	outputBox->AppendText("E");

}
private: System::Void button30_Click(System::Object^  sender, System::EventArgs^  e) { // F
	outputBox->AppendText("F");

}
private: System::Void logBox_Click(System::Object^  sender, System::EventArgs^  e) {
	logBox->ResetText();
	logBox->AppendText("Joel's Calculator Project                             ____ \n");
	logBox->AppendText("                                                                    / .    . \\ \n");
	logBox->AppendText("Version: 0.6                                                \\      ---< \n");
	logBox->AppendText("Copyright 2018                                            \\     / \n");
	logBox->AppendText("--                                              __________/    / \n");
	logBox->AppendText("Created For                        -=:____________/ \n");
	logBox->AppendText("Assignment 2 (CT4021)\n");
}
private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) { // Convert dec to hex
	char * inputValue = (char*)(void*) // Convert string ^ to char
		Marshal::StringToHGlobalAnsi(outputBox->Text);
	int decValue = atoi(inputValue);
	std::stringstream ss;
	ss << std::hex << decValue; // int decimal_value
	std::string res(ss.str());

	String^ outString = gcnew String(res.c_str()); //Convert dec to string ^
	outputBox->ResetText();
	outputBox->AppendText(outString);
	logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log


}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {// Hex to decimal
	char * inputValue = (char*)(void*) // Convert string ^ to char
		Marshal::StringToHGlobalAnsi(outputBox->Text);
	int result = std::stol(inputValue, 0, 16); //Convert to hex
	System::String^ outString = result.ToString(); //Convert to string ^
	outputBox->ResetText();
	outputBox->AppendText(outString);
	logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log

}
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {//Binary to decimal
	try {
		char * inputValue = (char*)(void*) // Convert string ^ to char
			Marshal::StringToHGlobalAnsi(outputBox->Text);
		long result = std::stol(inputValue, 0, 2); // Convert to Binary
		System::String^ outString = result.ToString(); //Convert to string ^
		outputBox->ResetText();
		outputBox->AppendText(outString);
		logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log
	}
	catch(...){
		logBox->AppendText("ERROR: Invalid Characters Entered! \n");
		logBox->AppendText("SYNTAX: Requires Numbers 0 Or 1 \n");
		outputBox->ResetText();
	}


}
private: System::Void button29_Click(System::Object^  sender, System::EventArgs^  e) {// oct to decimal
	try {
		char * inputValue = (char*)(void*) // Convert string ^ to char
			Marshal::StringToHGlobalAnsi(outputBox->Text);
		long result = std::stol(inputValue, 0, 8); // convert to oct
		System::String^ outString = result.ToString(); //Convert to string ^
		outputBox->ResetText();
		outputBox->AppendText(outString);
		logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log
	}
	catch (...) {
		logBox->AppendText("ERROR: Invalid Characters Entered!\n");
		logBox->AppendText("SYNTAX: Requires Numbers 0-8 \n");
		outputBox->ResetText();
	}


}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) { // Dec to binary
	try {
		char * inputValue = (char*)(void*) // Convert string ^ to char
			Marshal::StringToHGlobalAnsi(outputBox->Text);
		int decValue = atoi(inputValue);
		char res[1000];
		std::stringstream ss;
		itoa(decValue, res, 2); // Convert to binary
		std::string result;
		char c = 'a';
		ss << res;
		ss >> result;
		String^ outString = gcnew String(result.c_str()); //new string 
		outputBox->ResetText();
		outputBox->AppendText(outString);
		logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log
	}
	catch (...) {
		logBox->AppendText("ERROR: Invalid Characters Entered!\n");
		logBox->AppendText("SYNTAX: Requires Numbers 0-10 \n");
		outputBox->ResetText();
	}

}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) { //Dec to oct
	char * inputValue = (char*)(void*) // Convert string ^ to char
		Marshal::StringToHGlobalAnsi(outputBox->Text);
	int decValue = atoi(inputValue);
	char res[1000];
	std::stringstream ss;
	itoa(decValue, res, 8);// Convert to octal
	std::string result;
	char c = 'a';
	ss << res;
	ss >> result;
	String^ outString = gcnew String(result.c_str());//new string 
	outputBox->ResetText();
	outputBox->AppendText(outString);
	logBox->AppendText("=" + outputBox->Text + "\n"); //Output to box and log
}
private: System::Void button36_Click(System::Object^  sender, System::EventArgs^  e) { 
	outputBox->AppendText("-"); //Button -
}
}

	; }
