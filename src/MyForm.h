#pragma once

namespace Arr {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Collections;

	const int M = 10;
	int n = 3;

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
			//TODO: Add constructor code here
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
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ aboutToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ exitToolStripMenuItem;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;

	private:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			//
			// label1
			//
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(271, 61);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(22, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"n =";
			//
			// numericUpDown1
			//
			this->numericUpDown1->Location = System::Drawing::Point(301, 59);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown1->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(43, 20);
			this->numericUpDown1->TabIndex = 1;
			this->numericUpDown1->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &MyForm::numericUpDown1_ValueChanged);
			//
			// label2
			//
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(375, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(23, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"K =";
			//
			// numericUpDown2
			//
			this->numericUpDown2->Enabled = false;
			this->numericUpDown2->Location = System::Drawing::Point(406, 59);
			this->numericUpDown2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown2->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown2->Name = L"numericUpDown2";
			this->numericUpDown2->Size = System::Drawing::Size(45, 20);
			this->numericUpDown2->TabIndex = 3;
			this->numericUpDown2->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			//
			// label3
			//
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(477, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(24, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"N =";
			//
			// numericUpDown3
			//
			this->numericUpDown3->BackColor = System::Drawing::SystemColors::Window;
			this->numericUpDown3->Enabled = false;
			this->numericUpDown3->Location = System::Drawing::Point(510, 59);
			this->numericUpDown3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->numericUpDown3->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown3->Name = L"numericUpDown3";
			this->numericUpDown3->ReadOnly = true;
			this->numericUpDown3->Size = System::Drawing::Size(44, 20);
			this->numericUpDown3->TabIndex = 5;
			this->numericUpDown3->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			//
			// label4
			//
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(578, 60);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(33, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"eps =";
			//
			// textBox1
			//
			this->textBox1->Location = System::Drawing::Point(620, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(69, 20);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"0,00001";
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
			//
			// dataGridView1
			//
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(37, 118);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 50;
			this->dataGridView1->Size = System::Drawing::Size(160, 143);
			this->dataGridView1->TabIndex = 8;
			this->dataGridView1->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MyForm::dataGridView1_EditingControlShowing);
			//
			// dataGridView2
			//
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(478, 118);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 50;
			this->dataGridView2->Size = System::Drawing::Size(47, 143);
			this->dataGridView2->TabIndex = 9;
			this->dataGridView2->EditingControlShowing += gcnew System::Windows::Forms::DataGridViewEditingControlShowingEventHandler(this, &MyForm::dataGridView1_EditingControlShowing);
			//
			// label5
			//
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(53, 102);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(94, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Symmetric matrix";
			//
			// label6
			//
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(475, 93);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(124, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"Initial vector X(1)";
			//
			// button1
			//
			this->button1->Location = System::Drawing::Point(607, 238);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 44);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Calculate";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			//
			// label7
			//
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(21, 466);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(125, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"Found eigenvalues";
			//
			// label8
			//
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(168, 466);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 13);
			this->label8->TabIndex = 14;
			this->label8->Text = L"Found eigenvectors";
			//
			// listBox1
			//
			this->listBox1->FormattingEnabled = true;
			this->listBox1->HorizontalScrollbar = true;
			this->listBox1->Location = System::Drawing::Point(24, 482);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(122, 134);
			this->listBox1->TabIndex = 15;
			//
			// listBox2
			//
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(171, 482);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(528, 134);
			this->listBox2->TabIndex = 16;
			//
			// groupBox1
			//
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(37, 31);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(208, 48);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Input source";
			//
			// radioButton2
			//
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(125, 19);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(74, 17);
			this->radioButton2->TabIndex = 18;
			this->radioButton2->Text = L"From file";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			//
			// radioButton1
			//
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(15, 19);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(95, 17);
			this->radioButton1->TabIndex = 18;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"From interface";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			//
			// openFileDialog1
			//
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->Filter = L"Text files (*.txt)|*.txt|All files (*.*)|*.*";
			//
			// menuStrip1
			//
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->aboutToolStripMenuItem,
					this->helpToolStripMenuItem, this->exitToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(735, 24);
			this->menuStrip1->TabIndex = 18;
			this->menuStrip1->Text = L"menuStrip1";
			//
			// aboutToolStripMenuItem
			//
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->aboutToolStripMenuItem->Text = L"About";
			this->aboutToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::aboutToolStripMenuItem_Click);
			//
			// helpToolStripMenuItem
			//
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			this->helpToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::helpToolStripMenuItem_Click);
			//
			// exitToolStripMenuItem
			//
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::exitToolStripMenuItem_Click);
			//
			// label15
			//
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(578, 43);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(75, 13);
			this->label15->TabIndex = 32;
			this->label15->Text = L"Accuracy";
			//
			// label14
			//
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(477, 31);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 31;
			this->label14->Text = L"Vector";
			//
			// label13
			//
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(477, 44);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(50, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"dimension";
			//
			// label12
			//
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(375, 45);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 29;
			this->label12->Text = L"number";
			//
			// label11
			//
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(375, 31);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(75, 13);
			this->label11->TabIndex = 28;
			this->label11->Text = L"Eigenvalues";
			//
			// label10
			//
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(269, 45);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 13);
			this->label10->TabIndex = 27;
			this->label10->Text = L"dimension";
			//
			// label9
			//
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(269, 32);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(75, 13);
			this->label9->TabIndex = 26;
			this->label9->Text = L"Matrix";
			//
			// MyForm
			//
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(735, 625);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->numericUpDown3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->numericUpDown2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->MaximizeBox = false;
			this->Name = L"MyForm";
			this->Text = L"Eigenvalues and Eigenvectors Calculator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		/// <summary>
		/// Read matrix data from text file
		/// Format: n K eps (first line)
		/// Matrix elements (upper triangle)
		/// Initial vector elements
		/// </summary>
		array<array<double>^>^ ReadFromFile(String^ filename, int& n, int& K, int& N, double& e) {
			array<array<double>^>^ local = gcnew array<array< double >^>(M + 1);
			StreamReader^ objReader = gcnew StreamReader(filename);
			String^ sLine = "";
			array<String^>^ x;
			double a[M * M];
			int j = 0;
			sLine = objReader->ReadLine();
			x = sLine->Split(' ');
			n = Convert::ToInt16(x[0]);
			K = Convert::ToInt16(x[1]);
			N = n;
			e = Convert::ToDouble(x[2]);
			while (!objReader->EndOfStream)
			{
				sLine = objReader->ReadLine();
				x = sLine->Split(' ');
				for (int i = 0; i < x->Length; i++) {
					a[j] = Convert::ToDouble(x[i]);
					j++;
				}
			}
			objReader->Close();
			for (int i = 0; i < n + 1; i++) {
				local[i] = gcnew array< double >(n);
				for (int j = 0; j < n; j++)
					local[i][j] = 0;
			}
			int k = 0;
			for (int i = 0; i < n; i++)
				for (int j = i; j < n; j++) {
					local[i][j] = a[k];
					k++;
				}
			for (int j = 0; j < n; j++) {
				local[n][j] = a[k];
				k++;
			}
			return local;
		}

		/// <summary>
		/// Calculate eigenvalues and eigenvectors using inverse iteration method
		/// K - number of eigenvalues to find
		/// N - matrix dimension
		/// e - precision (epsilon)
		/// mas - input matrix (upper triangle)
		/// x - initial approximation vector
		/// </summary>
		array<array<double>^>^ Matr(int K, int N, double e, double mas[][M], double x[]) {
			array<array<double>^>^ local = gcnew array<array< double >^>(K);
			for (int i = 0; i < K; i++) {
				local[i] = gcnew array< double >(N + 1);
				for (int j = 0; j < N + 1; j++)
					local[i][j] = 0;
			}
			int n1 = N * (N + 1) / 2;
			int n2 = n1 + N;
			int h, d;
			double p, r, c, l, f;
			double a[M * M];
			h = 0;
			for (int i = 0; i < N; i++)
				for (int j = 0; j <= i; j++) {
					a[h] = mas[i][j];
					h++;
				}
			for (int b = 1; b <= K; b++) {
				for (int i = 0; i < N; i++) a[n1 + i] = x[i];
				a[n1] = x[0] + 0.1;
				f = 0; p = 0;
				do {
					f = p;
					// Multiply matrix by vector
					for (int i = 0; i < N; i++) {
						a[n2 + i] = 0;
						for (int j = 0; j <= i; j++)
							a[n2 + i] = a[n2 + i] + a[i * (i + 1) / 2 + j] * a[n1 + j];
					}
					for (int j = 0; j < N - 1; j++) {
						for (int i = j + 1; i < N; i++)
							a[n2 + j] = a[n2 + j] + a[i * (i + 1) / 2 + j] * a[n1 + i];
					}
					// Calculate Rayleigh quotient
					p = 0;
					r = 0;
					for (int i = 0; i < N; i++) {
						p = p + a[n2 + i] * a[n2 + i];
						r = r + a[n1 + i] * a[n2 + i];
					}
					l = p / r;
					c = Math::Sqrt(p);
					p = 0;
					for (int i = 0; i < N; i++) {
						a[n1 + i] = a[n2 + i] / c;
						if (Math::Abs(a[n1 + i]) >= p) p = Math::Abs(a[n1 + i]);
					}
				} while (Math::Abs(p - f) > e);
				// Store eigenvalue and eigenvector
				local[b - 1][0] = l;
				for (int i = 0; i < N; i++) local[b - 1][i + 1] = a[n1 + i];
				if (b == K) break;
				// Matrix deflation (Hotelling's deflation)
				for (int i = 0; i < N; i++) {
					for (int j = 0; j <= i; j++) {
						d = i * (i + 1) / 2 + j;
						a[d] = a[d] - l * a[n1 + i] * a[n1 + j];
					}
				}
			}
			return local;
		}

	private: Void initDataGridView_1_2() {
		const int SizeCell = 30;
		dataGridView1->RowCount = n;
		dataGridView1->ColumnCount = n;
		dataGridView1->Width = n * SizeCell + 55;
		dataGridView1->Height = n * SizeCell + 25;
		for (int i = 0; i < dataGridView1->ColumnCount; i++) {
			dataGridView1->Columns[i]->Width = SizeCell;
			dataGridView1->Rows[i]->Height = SizeCell;
		}
		for (int i = 0; i < n; i++) {
			dataGridView1->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView1->Columns[i]->HeaderCell->Value = Convert::ToString(i + 1);
			for (int j = 0; j < n; j++)
				dataGridView1->Rows[i]->Cells[j]->Value = "";
			for (int j = 0; j < i; j++) {
				dataGridView1->Rows[i]->Cells[j]->Style->BackColor = Color::Gray;
				dataGridView1->Rows[i]->Cells[j]->ReadOnly = true;
			}
		}
		dataGridView2->RowCount = n;
		dataGridView2->ColumnCount = 1;
		dataGridView2->Width = SizeCell + 55;
		dataGridView2->Height = n * SizeCell + 25;
		dataGridView2->Columns[0]->Width = SizeCell;
		for (int i = 0; i < dataGridView2->RowCount; i++) {
			dataGridView2->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridView2->Rows[i]->Height = SizeCell;
			dataGridView2->Rows[i]->Cells[0]->Value = "";
		}
	}

	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		initDataGridView_1_2();
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		n = (int)numericUpDown1->Value;
		numericUpDown2->Maximum = numericUpDown1->Value;
		numericUpDown3->Maximum = numericUpDown1->Value;
		numericUpDown2->Value = numericUpDown1->Value;
		numericUpDown3->Value = numericUpDown1->Value;
		initDataGridView_1_2();
		listBox1->Items->Clear();
		listBox2->Items->Clear();
	}

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		array<array<double>^>^ XY;
		double mas[M][M];
		double x[M];
		bool b = true;
		int K = (int)numericUpDown2->Value;
		int N = (int)numericUpDown3->Value;
		double eps;
		if (textBox1->Text == "") b = false;
		else eps = Convert::ToDouble(textBox1->Text);
		String^ fs; // string for output to ListBox
		listBox1->Items->Clear(); // clear list
		listBox2->Items->Clear(); // clear list
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++)
				if (dataGridView1->Rows[i]->Cells[j]->Value == "") b = false;
				else mas[j][i] = Convert::ToDouble(dataGridView1->Rows[i]->Cells[j]->Value);
			if (dataGridView2->Rows[i]->Cells[0]->Value == "") b = false;
			else x[i] = Convert::ToDouble(dataGridView2->Rows[i]->Cells[0]->Value);
		}
		if (b) {
			XY = Matr(K, N, eps, mas, x);
			for (int i = 0; i < K; i++) {
				fs = String::Format("{0,2}) {1,8:F6}", i + 1, XY[i][0]);
				listBox1->Items->Add(fs);
			}
			for (int i = 0; i < K; i++) {
				fs = String::Format("{0,2})", i + 1);
				for (int j = 1; j < N + 1; j++)
					fs = fs + String::Format("{0,10:F6}", XY[i][j]);
				listBox2->Items->Add(fs);
			}
		}
		else MessageBox::Show("Please fill in all fields: eps, matrix and vector.", "Input Error");
	}

	/// <summary>
	/// Allow only numbers, minus, comma, backspace and delete
	/// </summary>
	private: System::Void textBox1_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (Char::IsDigit(e->KeyChar) == true) return;
		if (e->KeyChar == '-') return;
		if (e->KeyChar == ',') return;
		if (e->KeyChar == (char)Keys::Back) return;
		if (e->KeyChar == (char)Keys::Delete) return;
		if (e->KeyChar == (char)Keys::Enter) return;
		// Block all other characters
		e->Handled = true;
	}

	private: System::Void dataGridView1_EditingControlShowing(System::Object^ sender, System::Windows::Forms::DataGridViewEditingControlShowingEventArgs^ e) {
		e->Control->KeyPress -= gcnew KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
		e->Control->KeyPress += gcnew KeyPressEventHandler(this, &MyForm::textBox1_KeyPress);
	}

	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (radioButton1->Checked) {
			initDataGridView_1_2();
			listBox1->Items->Clear();
			listBox2->Items->Clear();
		}
	}

	private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		int K, N;
		double eps;
		array<array<double>^>^ AB;
		if (radioButton2->Checked) {
			if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				// Read data from file
				String^ filename = openFileDialog1->FileName;
				AB = ReadFromFile(filename, n, K, N, eps);
				numericUpDown1->Value = n;
				numericUpDown2->Value = K;
				numericUpDown3->Value = N;
				textBox1->Text = eps.ToString();
				for (int i = 0; i < n; i++) {
					for (int j = i; j < n; j++) {
						dataGridView1->Rows[i]->Cells[j]->Value = AB[i][j];
					}
					dataGridView2->Rows[i]->Cells[0]->Value = AB[n][i];
				}
			}
		}
	}

	private: System::Void aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Software for finding eigenvalues and eigenvectors of a symmetric matrix\n"
			"using the inverse iteration method\n"
			"Development environment - Visual Studio C++ 2019\n"
			"Author: Student Name\n"
			"Group: IVK-2301\n"
			"Version: " + Application::ProductVersion + "\n"
			"Year: 2023\n\n"
			"For help, click 'Help' in the menu or press F1", "About");
	}

	private: System::Void helpToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Help!\n"
			"You are in the Help section.\n"
			"Here you will find instructions on how to use the program.\n\n"
			"1) Select the data input method.\n"
			"There are 2 options: from interface or from file.\n\n"
			"When using the interface, you need to specify\n"
			"matrix dimension n, number of eigenvalues K, vector dimension N "
			"and precision eps,\n"
			"(for this variant constraints apply: 1<=K<=N=n).\n"
			"Enter matrix elements in the upper triangle and initial vector X(1) in the table\n"
			"Then click 'Calculate'\n"
			"The found eigenvalues and eigenvectors will be displayed below.\n\n"
			"If you want to load data from a file, select the 'From file' option,\n"
			"specify the file path where the matrix and vector data is stored.\n"
			"File format:\n"
			"First line: n K eps\n"
			"Following lines: matrix elements (upper triangle) and vector\n\n"
			"Click 'Calculate' and view the results below\n\n"
			"2) For information about the program, click 'About' in the menu\n"
			"where you can see the program name, version, author and year.\n\n"
			"3) To exit the program, click 'Exit' in the menu.\n\n"
			"For more help, click 'Help' in the menu or press F1", "Help");
	}

	private: System::Void exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}
