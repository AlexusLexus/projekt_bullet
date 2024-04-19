#pragma once

namespace Projekt {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainWindow
	/// </summary>
	public ref class MainWindow : public System::Windows::Forms::Form
	{
	public:
		MainWindow(void)
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
		~MainWindow()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::NumericUpDown^ input_x;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::TrackBar^ trackBar1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button_playstop;
	private: System::Windows::Forms::Button^ button_restart;
	private: System::ComponentModel::IContainer^ components;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainWindow::typeid));
			this->input_x = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button_playstop = (gcnew System::Windows::Forms::Button());
			this->button_restart = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_x))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// input_x
			// 
			this->input_x->AllowDrop = true;
			this->input_x->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->input_x->DecimalPlaces = 3;
			this->input_x->Location = System::Drawing::Point(41, 354);
			this->input_x->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1027210, 5, 0, 0 });
			this->input_x->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1027211, 5, 0, System::Int32::MinValue });
			this->input_x->Name = L"input_x";
			this->input_x->Size = System::Drawing::Size(65, 20);
			this->input_x->TabIndex = 0;
			this->input_x->ThousandsSeparator = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(18, 355);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(21, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"X:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(684, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->aboutToolStripMenuItem->Text = L"О программе";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainWindow::aboutToolStripMenuItem_Click);
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(12, 40);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(660, 238);
			this->panel1->TabIndex = 3;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(12, 284);
			this->trackBar1->Maximum = 100;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(660, 45);
			this->trackBar1->TabIndex = 4;
			this->trackBar1->TabStop = false;
			this->trackBar1->ValueChanged += gcnew System::EventHandler(this, &MainWindow::trackBar1_ValueChanged);
			this->trackBar1->DragDrop += gcnew System::Windows::Forms::DragEventHandler(this, &MainWindow::trackBar1_DragDrop);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(12, 315);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(660, 23);
			this->label2->TabIndex = 5;
			this->label2->Text = L"10/100";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button_playstop
			// 
			this->button_playstop->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_playstop.Image")));
			this->button_playstop->Location = System::Drawing::Point(308, 335);
			this->button_playstop->Name = L"button_playstop";
			this->button_playstop->Size = System::Drawing::Size(44, 44);
			this->button_playstop->TabIndex = 6;
			this->button_playstop->UseVisualStyleBackColor = true;
			// 
			// button_restart
			// 
			this->button_restart->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button_restart.Image")));
			this->button_restart->Location = System::Drawing::Point(358, 335);
			this->button_restart->Name = L"button_restart";
			this->button_restart->Size = System::Drawing::Size(44, 44);
			this->button_restart->TabIndex = 7;
			this->button_restart->UseVisualStyleBackColor = true;
			// 
			// MainWindow
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(684, 386);
			this->Controls->Add(this->button_restart);
			this->Controls->Add(this->button_playstop);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->input_x);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MainWindow";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Пулевидная кривая";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->input_x))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	private: 
		System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
	private: 
		System::Void trackBar1_DragDrop(System::Object^ sender, System::Windows::Forms::DragEventArgs^ e);
	private: 
		System::Void trackBar1_ValueChanged(System::Object^ sender, System::EventArgs^ e);

};
}
