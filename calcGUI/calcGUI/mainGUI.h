#pragma once
#include <msclr\marshal_cppstd.h>
#include <string> 
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
	private: System::Windows::Forms::TextBox^  outputBox;
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
	private: System::Windows::Forms::Button^  button10;
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
			this->outputBox->Size = System::Drawing::Size(848, 92);
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
			this->button1->Location = System::Drawing::Point(338, 794);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(101, 76);
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
			this->button2->Location = System::Drawing::Point(462, 794);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(101, 76);
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
			this->button3->Location = System::Drawing::Point(586, 794);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(101, 76);
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
			this->button4->Location = System::Drawing::Point(338, 691);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(101, 76);
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
			this->button5->Location = System::Drawing::Point(462, 691);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(101, 76);
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
			this->button6->Location = System::Drawing::Point(586, 691);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(101, 76);
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
			this->button7->Location = System::Drawing::Point(338, 584);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(101, 76);
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
			this->button8->Location = System::Drawing::Point(462, 584);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(101, 76);
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
			this->button9->Location = System::Drawing::Point(586, 584);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(101, 76);
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
			this->button10->Location = System::Drawing::Point(733, 718);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(131, 249);
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
			this->button11->Location = System::Drawing::Point(733, 584);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(131, 104);
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
			this->button12->Location = System::Drawing::Point(338, 891);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(101, 76);
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
			this->button13->Location = System::Drawing::Point(338, 465);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(101, 76);
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
			this->button14->Location = System::Drawing::Point(462, 465);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(101, 76);
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
			this->backspace->Location = System::Drawing::Point(586, 465);
			this->backspace->Name = L"backspace";
			this->backspace->Size = System::Drawing::Size(278, 76);
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
			this->button16->Size = System::Drawing::Size(131, 98);
			this->button16->TabIndex = 16;
			this->button16->Text = L"MEM Clear";
			this->button16->UseVisualStyleBackColor = false;
			// 
			// logBox
			// 
			this->logBox->BackColor = System::Drawing::Color::Black;
			this->logBox->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->logBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->logBox->ForeColor = System::Drawing::Color::Yellow;
			this->logBox->Location = System::Drawing::Point(16, 23);
			this->logBox->Name = L"logBox";
			this->logBox->ReadOnly = true;
			this->logBox->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->logBox->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::Vertical;
			this->logBox->Size = System::Drawing::Size(848, 298);
			this->logBox->TabIndex = 17;
			this->logBox->Text = L"----Joel\'s Console Calculator v0.1 ----";
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
			this->button15->Location = System::Drawing::Point(177, 465);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(131, 98);
			this->button15->TabIndex = 18;
			this->button15->Text = L"MEM Store";
			this->button15->UseVisualStyleBackColor = false;
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
			this->button17->Location = System::Drawing::Point(194, 584);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(101, 76);
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
			this->button18->Location = System::Drawing::Point(194, 691);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(101, 76);
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
			this->button19->Location = System::Drawing::Point(194, 794);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(101, 76);
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
			this->button20->Location = System::Drawing::Point(194, 891);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(101, 76);
			this->button20->TabIndex = 22;
			this->button20->Text = L"+";
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->ClientSize = System::Drawing::Size(887, 987);
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
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
const char * expressionToParse;


char currentChar() {

	return *expressionToParse;
}

char getNextChar() {
	return *expressionToParse++;
}


double number()
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
	if (currentChar() >= '0' && currentChar() <= '9')
		return number();
	else if (currentChar() == '(')
	{
		getNextChar(); // '('
		int result = calculate2();
		getNextChar(); // ')'
		return result;
	}
	else if (currentChar() == '-')
	{
		getNextChar();
		return -factor();		
	}
	return 0; // error
}

double term()
{
	double result = factor();
	while (currentChar() == '*' || currentChar() == '/')
		if (getNextChar() == '*')
			result *= factor();
		else
			result = result / (1.0 * factor());
	return result;
};

double calculate2() {
	double result = term();
	while (currentChar() == '+' || currentChar() == '-')
		if (getNextChar() == '+')
			result += term();
		else
			result -= term();
	return result;
}


private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) { //Button Exec 
	logBox->AppendText("\n");
	const char * inputValue = (const char*)(void*)
		Marshal::StringToHGlobalAnsi(outputBox->Text);
	logBox->AppendText(outputBox->Text + "\n");
	expressionToParse = (inputValue);
	double result = calculate2();
	outputBox->ResetText();
	System::String^ outString = result.ToString();
	
	outputBox->AppendText(outString);
	logBox->AppendText("=" + outputBox->Text + "\n");
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

	outputBox->ResetText();
	logBox->AppendText("-------------------RESET-------------------\n");

}
};
}
