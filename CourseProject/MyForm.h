#pragma once
#include "Functions.h"
#include "SyntaxHighlighter.h"

namespace CourseProject
{
	//Windows Forms namespaces
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	//for WPF integration
	using namespace System::Windows::Controls;
	using namespace System::Windows::Forms;
	using namespace System::Windows::Forms::Integration;

	//Syncfusion UI
	using namespace Syncfusion::Windows::Forms;


	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public Syncfusion::Windows::Forms::MetroForm
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
		}
		delegate void SubmitHandler();
		event SubmitHandler ^SubmitClicked;

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
	protected:
	private: System::Windows::Forms::MenuStrip^ menuStrip1;

	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  settingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: Syncfusion::Windows::Forms::Tools::TabControlAdv^  tabControl1;
	private: Syncfusion::Windows::Forms::Tools::TabPageAdv^  tabPage1;
	private: Syncfusion::Windows::Forms::Tools::TabPageAdv^  tabPage2;
	private: System::Windows::Forms::RichTextBox^  richTextBox2;
	private: System::Windows::Forms::Button^  button7;

	private: System::ComponentModel::BackgroundWorker^  backgroundWorker1;

	private: Syncfusion::Windows::Forms::SkinManager^  skinManager1;
	private: Syncfusion::Windows::Forms::PdfViewer::PdfDocumentView^  pdfDocumentView1;
	private: System::Windows::Forms::Button^  button8;

	private: System::ComponentModel::IContainer^  components;

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
			this->components = (gcnew System::ComponentModel::Container());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->settingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabControl1 = (gcnew Syncfusion::Windows::Forms::Tools::TabControlAdv());
			this->tabPage1 = (gcnew Syncfusion::Windows::Forms::Tools::TabPageAdv());
			this->pdfDocumentView1 = (gcnew Syncfusion::Windows::Forms::PdfViewer::PdfDocumentView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew Syncfusion::Windows::Forms::Tools::TabPageAdv());
			this->richTextBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->skinManager1 = (gcnew Syncfusion::Windows::Forms::SkinManager(this->components));
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabControl1))->BeginInit();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->settingsToolStripMenuItem, this->aboutToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1179, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// settingsToolStripMenuItem
			// 
			this->settingsToolStripMenuItem->Name = L"settingsToolStripMenuItem";
			this->settingsToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->settingsToolStripMenuItem->Text = L"Settings";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			// 
			// panel2
			// 
			this->panel2->Location = System::Drawing::Point(345, 372);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(367, 124);
			this->panel2->TabIndex = 22;
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->ForeColor = System::Drawing::Color::ForestGreen;
			this->button6->Location = System::Drawing::Point(845, 482);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(84, 37);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Highlighter";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button5
			// 
			this->button5->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(451, 289);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(116, 50);
			this->button5->TabIndex = 21;
			this->button5->Text = L"Check";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Visible = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::Blue;
			this->label2->Location = System::Drawing::Point(271, 202);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(62, 17);
			this->label2->TabIndex = 20;
			this->label2->Text = L"Answer: ";
			this->label2->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label2->Visible = false;
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->ForeColor = System::Drawing::Color::Firebrick;
			this->button4->Location = System::Drawing::Point(1061, 482);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(88, 37);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Exit";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Blue;
			this->label1->Location = System::Drawing::Point(271, 32);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(73, 17);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Question: ";
			this->label1->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label1->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::SystemColors::Window;
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox1->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->richTextBox1->Location = System::Drawing::Point(367, 32);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(311, 119);
			this->richTextBox1->TabIndex = 16;
			this->richTextBox1->Text = L"";
			this->richTextBox1->Visible = false;
			// 
			// button3
			// 
			this->button3->ForeColor = System::Drawing::Color::Crimson;
			this->button3->Location = System::Drawing::Point(731, 32);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(119, 23);
			this->button3->TabIndex = 15;
			this->button3->Text = L"get random question";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button1);
			this->panel1->Controls->Add(this->button2);
			this->panel1->Location = System::Drawing::Point(885, 313);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(135, 117);
			this->panel1->TabIndex = 14;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(30, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"read";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(30, 44);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"write";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabControl1
			// 
			this->tabControl1->BeforeTouchSize = System::Drawing::Size(1179, 602);
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->HotTrack = true;
			this->tabControl1->ItemSize = System::Drawing::Size(108, 26);
			this->tabControl1->Location = System::Drawing::Point(0, 24);
			this->tabControl1->Multiline = true;
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->Size = System::Drawing::Size(1179, 602);
			this->tabControl1->SizeMode = Syncfusion::Windows::Forms::Tools::TabSizeMode::Fixed;
			this->tabControl1->TabIndex = 23;
			this->tabControl1->ThemesEnabled = true;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->pdfDocumentView1);
			this->tabPage1->Controls->Add(this->button7);
			this->tabPage1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->tabPage1->Image = nullptr;
			this->tabPage1->ImageSize = System::Drawing::Size(16, 16);
			this->tabPage1->Location = System::Drawing::Point(3, 31);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->ShowCloseButton = true;
			this->tabPage1->Size = System::Drawing::Size(1172, 567);
			this->tabPage1->TabFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage1->TabForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->tabPage1->TabIndex = 1;
			this->tabPage1->Text = L"Theory";
			this->tabPage1->ThemesEnabled = true;
			// 
			// pdfDocumentView1
			// 
			this->pdfDocumentView1->AutoScroll = true;
			this->pdfDocumentView1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(237)),
				static_cast<System::Int32>(static_cast<System::Byte>(237)), static_cast<System::Int32>(static_cast<System::Byte>(237)));
			this->pdfDocumentView1->Location = System::Drawing::Point(326, 23);
			this->pdfDocumentView1->Name = L"pdfDocumentView1";
			this->pdfDocumentView1->ScrollDisplacementValue = 0;
			this->pdfDocumentView1->Size = System::Drawing::Size(572, 481);
			this->pdfDocumentView1->TabIndex = 20;
			this->pdfDocumentView1->ZoomMode = Syncfusion::Windows::Forms::PdfViewer::ZoomMode::Default;
			// 
			// button7
			// 
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->ForeColor = System::Drawing::Color::Firebrick;
			this->button7->Location = System::Drawing::Point(1061, 482);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(88, 37);
			this->button7->TabIndex = 19;
			this->button7->Text = L"Exit";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->button8);
			this->tabPage2->Controls->Add(this->richTextBox2);
			this->tabPage2->Controls->Add(this->panel1);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->Controls->Add(this->button3);
			this->tabPage2->Controls->Add(this->button6);
			this->tabPage2->Controls->Add(this->richTextBox1);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Controls->Add(this->label2);
			this->tabPage2->Controls->Add(this->button4);
			this->tabPage2->Image = nullptr;
			this->tabPage2->ImageSize = System::Drawing::Size(16, 16);
			this->tabPage2->Location = System::Drawing::Point(3, 31);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->ShowCloseButton = true;
			this->tabPage2->Size = System::Drawing::Size(1172, 567);
			this->tabPage2->TabFont = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tabPage2->TabForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Testing";
			this->tabPage2->ThemesEnabled = true;
			// 
			// richTextBox2
			// 
			this->richTextBox2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->richTextBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->richTextBox2->ForeColor = System::Drawing::Color::OrangeRed;
			this->richTextBox2->Location = System::Drawing::Point(367, 211);
			this->richTextBox2->Name = L"richTextBox2";
			this->richTextBox2->Size = System::Drawing::Size(311, 42);
			this->richTextBox2->TabIndex = 23;
			this->richTextBox2->Text = L"";
			this->richTextBox2->Visible = false;
			// 
			// skinManager1
			// 
			this->skinManager1->Controls = nullptr;
			this->skinManager1->VisualTheme = Syncfusion::Windows::Forms::VisualTheme::Metro;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->ForeColor = System::Drawing::Color::ForestGreen;
			this->button8->Location = System::Drawing::Point(957, 482);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(84, 37);
			this->button8->TabIndex = 24;
			this->button8->Text = L"Start!";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// MyForm
			// 
			this->AcceptButton = this->button5;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1179, 626);
			this->Controls->Add(this->tabControl1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"C language learning program";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tabControl1))->EndInit();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e)
	{
		Functions::ReadFromFile();
		//pdfDocumentView1->Load("");

		//System::Windows::Controls::TabControl^ main = gcnew System::Windows::Controls::TabControl();
		//main->
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //read
		Functions::ReadFromFile();
		MessageBox::Show(Functions::questionsList->Items->Count.ToString());
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { //write
		Functions::WriteToFile();
		MessageBox::Show("Writed!");
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		//DataModels::Question^ random = gcnew DataModels::Question();
		Functions::current = Functions::GetRandomQuestion();
		richTextBox1->Text = Functions::current->Text;
		//MessageBox::Show(random->ID.ToString());
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) { //exit
		Functions::WriteToFile();
		Application::Exit();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) { //check
		if (richTextBox1->Text != "")
		{
			auto result = Functions::CheckAnswer(richTextBox2->Text);
			if (result)
				MessageBox::Show("right answer");
			else
				MessageBox::Show("not right answer");
			richTextBox2->Text = nullptr;
		}
		else
		{
			MessageBox::Show("Failed to get a new question", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}

	}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) { // Highlighter

	ElementHost ^elementHost = gcnew ElementHost();
	elementHost->Dock = DockStyle::Fill;
	panel2->Controls->Add(elementHost);

	TextBlock ^tb = gcnew TextBlock();
	elementHost->Child = tb;
	elementHost->Margin = System::Windows::Forms::Padding(0,0,0,0);
	elementHost->Region = gcnew System::Drawing::Region();
	elementHost->BackColor = System::Drawing::Color::White;

	SyntaxHighlighter ^syntax = gcnew SyntaxHighlighter(tb);
    String^ code = "int main(\"kmmkd\"){ \ndo {smth}while(cond)\n}";
	syntax->DoHighlight(code);
	elementHost->Font = gcnew System::Drawing::Font("Consolas", 10.0F);
}

private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) { // exit
	Functions::WriteToFile();
	Application::Exit();
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) { //Start!
	label1->Visible = true;
	label2->Visible = true;
	richTextBox1->Visible = true;
	richTextBox2->Visible = true;
	button5->Visible = true;
	button3->Visible = true;
	button8->Enabled = false;
}
};
	}