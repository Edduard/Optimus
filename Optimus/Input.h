#pragma once
#include <Windows.h>
#include<cstdlib>
#include <time.h> 
#include"Output.h"
#include"process.h"
#include"loading.h"

namespace Optimus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Input
	/// </summary>
	public ref class Input : public System::Windows::Forms::Form
	{
	public:
		Input(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//

			//loading^ screen = gcnew loading();
			//screen->Show();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Input()
		{
			if (components)
			{
				delete components;
			}
		}
	public: double durata, volum, temperatura, debit, n, presiune;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::TrackBar^  trackBar2;
	private: System::Windows::Forms::TrackBar^  trackBar3;
	private: System::Windows::Forms::TrackBar^  trackBar4;
	private: System::Windows::Forms::TrackBar^  trackBar5;
	private: System::Windows::Forms::TrackBar^  trackBar6;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	protected:

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Input::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar2 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar3 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar4 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar5 = (gcnew System::Windows::Forms::TrackBar());
			this->trackBar6 = (gcnew System::Windows::Forms::TrackBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(59, 80);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(39, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Durata";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(59, 131);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Volum util";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(59, 177);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(67, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Temperatura";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(477, 80);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(65, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Debit de aer";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(477, 131);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(83, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Viteza de rotatie";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(477, 177);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(48, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"Presiune";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(275, 80);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 19;
			this->label7->Text = L"0 h";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(275, 131);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(28, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"20 L";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Location = System::Drawing::Point(275, 177);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(58, 13);
			this->label9->TabIndex = 21;
			this->label9->Text = L"10` Celsius";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Location = System::Drawing::Point(673, 80);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(49, 13);
			this->label10->TabIndex = 22;
			this->label10->Text = L"10 L/min";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(674, 131);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(45, 13);
			this->label11->TabIndex = 23;
			this->label11->Text = L"200 rpm";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Location = System::Drawing::Point(674, 177);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(31, 13);
			this->label12->TabIndex = 24;
			this->label12->Text = L"1 bar";
			// 
			// trackBar1
			// 
			this->trackBar1->BackColor = System::Drawing::Color::White;
			this->trackBar1->Location = System::Drawing::Point(165, 75);
			this->trackBar1->Maximum = 160;
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(104, 45);
			this->trackBar1->TabIndex = 12;
			this->trackBar1->TickFrequency = 10;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Input::trackBar1_Scroll);
			// 
			// trackBar2
			// 
			this->trackBar2->BackColor = System::Drawing::Color::White;
			this->trackBar2->Location = System::Drawing::Point(165, 126);
			this->trackBar2->Maximum = 500;
			this->trackBar2->Minimum = 200;
			this->trackBar2->Name = L"trackBar2";
			this->trackBar2->Size = System::Drawing::Size(104, 45);
			this->trackBar2->TabIndex = 13;
			this->trackBar2->TickFrequency = 20;
			this->trackBar2->Value = 200;
			this->trackBar2->Scroll += gcnew System::EventHandler(this, &Input::trackBar2_Scroll);
			// 
			// trackBar3
			// 
			this->trackBar3->BackColor = System::Drawing::Color::White;
			this->trackBar3->Location = System::Drawing::Point(165, 177);
			this->trackBar3->Maximum = 700;
			this->trackBar3->Minimum = 100;
			this->trackBar3->Name = L"trackBar3";
			this->trackBar3->Size = System::Drawing::Size(104, 45);
			this->trackBar3->TabIndex = 14;
			this->trackBar3->TickFrequency = 50;
			this->trackBar3->Value = 100;
			this->trackBar3->Scroll += gcnew System::EventHandler(this, &Input::trackBar3_Scroll);
			// 
			// trackBar4
			// 
			this->trackBar4->BackColor = System::Drawing::Color::White;
			this->trackBar4->Location = System::Drawing::Point(563, 75);
			this->trackBar4->Maximum = 500;
			this->trackBar4->Minimum = 100;
			this->trackBar4->Name = L"trackBar4";
			this->trackBar4->Size = System::Drawing::Size(104, 45);
			this->trackBar4->TabIndex = 16;
			this->trackBar4->TickFrequency = 30;
			this->trackBar4->Value = 100;
			this->trackBar4->Scroll += gcnew System::EventHandler(this, &Input::trackBar4_Scroll);
			// 
			// trackBar5
			// 
			this->trackBar5->BackColor = System::Drawing::Color::White;
			this->trackBar5->Location = System::Drawing::Point(563, 126);
			this->trackBar5->Maximum = 3500;
			this->trackBar5->Minimum = 2000;
			this->trackBar5->Name = L"trackBar5";
			this->trackBar5->Size = System::Drawing::Size(104, 45);
			this->trackBar5->TabIndex = 17;
			this->trackBar5->TickFrequency = 120;
			this->trackBar5->Value = 2000;
			this->trackBar5->Scroll += gcnew System::EventHandler(this, &Input::trackBar5_Scroll);
			// 
			// trackBar6
			// 
			this->trackBar6->BackColor = System::Drawing::Color::White;
			this->trackBar6->Location = System::Drawing::Point(563, 177);
			this->trackBar6->Maximum = 20;
			this->trackBar6->Minimum = 10;
			this->trackBar6->Name = L"trackBar6";
			this->trackBar6->Size = System::Drawing::Size(104, 45);
			this->trackBar6->TabIndex = 18;
			this->trackBar6->Value = 10;
			this->trackBar6->Scroll += gcnew System::EventHandler(this, &Input::trackBar6_Scroll);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(339, 228);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(139, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"Generate random values";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Input::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(258, 228);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Reset";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Input::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(665, 228);
			this->button3->Name = L"button3";
			this->button3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->button3->Size = System::Drawing::Size(94, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Plot the graphs";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Input::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(484, 228);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Optimize";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Input::button4_Click);
			// 
			// Input
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(784, 261);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->trackBar6);
			this->Controls->Add(this->trackBar5);
			this->Controls->Add(this->trackBar4);
			this->Controls->Add(this->trackBar3);
			this->Controls->Add(this->trackBar2);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::ControlText;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Input";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Optimus";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Input::Input_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Input::Input_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		int num[6] = { 0 };
		//
		// seed
		//
		srand((int)time(0));
		//
		// Randomize the array values.
		//
		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 150) + 10;
		this->trackBar1->Value = num[0];

		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 290) + 10;
		this->trackBar2->Value = 200 + num[1];

		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 590) + 10;
		this->trackBar3->Value = 100 + num[2];

		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 390) + 10;
		this->trackBar4->Value = 100 + num[3];

		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 1490) + 10;
		this->trackBar5->Value = 2000 + num[4];

		for (int i = 0; i < 6; i++)
			num[i] = (rand() % 9) + 1;
		this->trackBar6->Value = 10 + num[5];

		//
		// set the label text with random number
		//
		this->durata = (this->trackBar1->Value) / 10 + 0.1 * ((this->trackBar1->Value) % 10);
		this->label7->Text = Convert::ToString(this->durata) + " h";

		this->volum = (this->trackBar2->Value) / 10 + 0.1 * ((this->trackBar2->Value) % 10);
		this->label8->Text = Convert::ToString(this->volum) + " L";

		this->temperatura = (this->trackBar3->Value) / 10 + 0.1 * ((this->trackBar3->Value) % 10);
		this->label9->Text = Convert::ToString(this->temperatura) + "` Celsius";

		this->debit = (this->trackBar4->Value) / 10 + 0.1 * ((this->trackBar4->Value) % 10);
		this->label10->Text = Convert::ToString(this->debit) + " L/min";

		this->n = (this->trackBar5->Value) / 10 + 0.1 * ((this->trackBar5->Value) % 10);
		this->label11->Text = Convert::ToString(this->n) + " rpm";

		this->presiune = (this->trackBar6->Value) / 10 + 0.1 * ((this->trackBar6->Value) % 10);
		this->label12->Text = Convert::ToString(this->presiune) + " bar";
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e)
	{
		//		 
		// set the trackbars to 0
		//
		this->trackBar1->Value = 0;
		this->trackBar2->Value = 200;
		this->trackBar3->Value = 100;
		this->trackBar4->Value = 100;
		this->trackBar5->Value = 2000;
		this->trackBar6->Value = 10;
		//
		// set the text to 0
		//
		this->label7->Text = "0 h";
		this->label8->Text = "20 L";
		this->label9->Text = "10` Celsius";
		this->label10->Text = "10 L/min";
		this->label11->Text = "200 rpm";
		this->label12->Text = "1 bar";
	}
			 //
			 //	Apply the transfer function for each value and plot the graphs
			 //
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Output^ out = gcnew Output();

		process^ proces = gcnew process();

		//loading^ screen = gcnew loading();
		//screen->Show();
		//System::Threading::Thread::Sleep(1000);
		//screen->Close();

		proces->dataTransfer(durata, volum, temperatura, debit, n, presiune);
		proces->dataProcess();
		for (int i = 0; i<durata; i++)
		{
			out->chart1->Series["DO"]->Points->AddXY(i, proces->getDO(i));
			out->chart2->Series["pH"]->Points->AddXY(i, proces->getPH(i));
			out->chart3->Series["NNH2"]->Points->AddXY(i, proces->getNNH2(i));
			out->chart4->Series["oxigen diz"]->Points->AddXY(i, proces->getOxigenDiz(i));
		}
		
		out->Show();
	}
			 //
			 //Buton care seteaza valorile la cele optime
			 //
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		this->durata = 16;
		this->trackBar1->Value = 160;
		this->label7->Text = "16 h";

		this->volum = 42;
		this->trackBar2->Value = 420;
		this->label8->Text = "42 L";

		this->temperatura = 37;
		this->trackBar3->Value = 370;
		this->label9->Text = "37` Celsius";

		this->debit = 15;
		this->trackBar4->Value = 150;
		this->label10->Text = "15 L/min";

		this->n = 250;
		this->trackBar5->Value = 2500;
		this->label11->Text = "250 rpm";

		this->presiune = 1.2;
		this->trackBar6->Value = 12;
		this->label12->Text = "1.2 bar";

	}
			 //
			 //	Print each trackbar value
			 //
	private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->durata = (this->trackBar1->Value) / 10 + 0.1 * ((this->trackBar1->Value) % 10);
		this->label7->Text = Convert::ToString(this->durata) + " h";
	}
	private: System::Void trackBar2_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->volum = (this->trackBar2->Value) / 10 + 0.1 * ((this->trackBar2->Value) % 10);
		this->label8->Text = Convert::ToString(this->volum) + " L";
	}
	private: System::Void trackBar3_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->temperatura = (this->trackBar3->Value) / 10 + 0.1 * ((this->trackBar3->Value) % 10);
		this->label9->Text = Convert::ToString(this->temperatura) + "` Celsius";
	}
	private: System::Void trackBar4_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->debit = (this->trackBar4->Value) / 10 + 0.1 * ((this->trackBar4->Value) % 10);
		this->label10->Text = Convert::ToString(this->debit) + " L/min";
	}
	private: System::Void trackBar5_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->n = (this->trackBar5->Value) / 10 + 0.1 * ((this->trackBar5->Value) % 10);
		this->label11->Text = Convert::ToString(this->n) + " rpm";
	}
	private: System::Void trackBar6_Scroll(System::Object^  sender, System::EventArgs^  e)
	{
		this->presiune = (this->trackBar6->Value) / 10 + 0.1 * ((this->trackBar6->Value) % 10);
		this->label12->Text = Convert::ToString(this->presiune) + " bar";
	}
	private: System::Void Input_Load(System::Object^  sender, System::EventArgs^  e) {


		//System::Threading::Thread::Sleep(2000);
		//screen->Close();

	}

	private: System::Void Input_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {
		Application::Exit();
	}
};
}
