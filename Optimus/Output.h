#pragma once

namespace Optimus {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Output
	/// </summary>
	public ref class Output : public System::Windows::Forms::Form
	{
	public:
		Output(void)
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
		~Output()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected:
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart2;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart3;
	public: System::Windows::Forms::DataVisualization::Charting::Chart^  chart4;

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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea21 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series21 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea22 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series22 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea23 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series23 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea24 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series24 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Output::typeid));
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->chart4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea21->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea21);
			legend21->Name = L"Legend1";
			this->chart1->Legends->Add(legend21);
			this->chart1->Location = System::Drawing::Point(13, 13);
			this->chart1->Name = L"chart1";
			series21->ChartArea = L"ChartArea1";
			series21->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series21->Legend = L"Legend1";
			series21->Name = L"DO";
			this->chart1->Series->Add(series21);
			this->chart1->Size = System::Drawing::Size(624, 300);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// chart2
			// 
			chartArea22->Name = L"ChartArea1";
			this->chart2->ChartAreas->Add(chartArea22);
			legend22->Name = L"Legend1";
			this->chart2->Legends->Add(legend22);
			this->chart2->Location = System::Drawing::Point(13, 356);
			this->chart2->Name = L"chart2";
			series22->ChartArea = L"ChartArea1";
			series22->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series22->Legend = L"Legend1";
			series22->Name = L"pH";
			this->chart2->Series->Add(series22);
			this->chart2->Size = System::Drawing::Size(624, 361);
			this->chart2->TabIndex = 1;
			this->chart2->Text = L"chart2";
			// 
			// chart3
			// 
			chartArea23->Name = L"ChartArea1";
			this->chart3->ChartAreas->Add(chartArea23);
			legend23->Name = L"Legend1";
			this->chart3->Legends->Add(legend23);
			this->chart3->Location = System::Drawing::Point(643, 356);
			this->chart3->Name = L"chart3";
			series23->ChartArea = L"ChartArea1";
			series23->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series23->Legend = L"Legend1";
			series23->Name = L"NNH2";
			this->chart3->Series->Add(series23);
			this->chart3->Size = System::Drawing::Size(695, 361);
			this->chart3->TabIndex = 2;
			this->chart3->Text = L"chart3";
			// 
			// chart4
			// 
			chartArea24->Name = L"ChartArea1";
			this->chart4->ChartAreas->Add(chartArea24);
			legend24->Name = L"Legend1";
			this->chart4->Legends->Add(legend24);
			this->chart4->Location = System::Drawing::Point(643, 13);
			this->chart4->Name = L"chart4";
			series24->ChartArea = L"ChartArea1";
			series24->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series24->Legend = L"Legend1";
			series24->Name = L"oxigen diz";
			this->chart4->Series->Add(series24);
			this->chart4->Size = System::Drawing::Size(695, 337);
			this->chart4->TabIndex = 3;
			this->chart4->Text = L"chart4";
			// 
			// Output
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1350, 729);
			this->Controls->Add(this->chart4);
			this->Controls->Add(this->chart3);
			this->Controls->Add(this->chart2);
			this->Controls->Add(this->chart1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Output";
			this->Text = L"Output";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Output::Output_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart4))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Output_Load(System::Object^  sender, System::EventArgs^  e) {
	}
};
}
