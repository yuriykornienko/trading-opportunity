#pragma once

//#include "../../boost2/boost2/main.cpp"
//#include <main.cpp>
#include <vector>
#include "SQL.h"
#include <string>
#include <List>

//extern int z;
////extern  vector< Mysecurities> stockcopy;

//string[] str = new string[dataGridView1.RowCount - 1];
//for (int i = 0; i < dataGridView1.RowCount - 1; i++)
//{
//	str[i] = dataGridView1.Rows[i].Cells[0].Value.ToString();
//}





namespace proekt3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;





	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{

	public:
		//void Printtt();
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			Printtt();



		}



		void Printtt() {
		/*	string name[] = { "LKOH", "SBER", "ROSN", "GAZP" };
			vector<string> mytradelist1 = { "' LKOH'", "'SBER'", "'ROSN'", "'GAZP'" };
			vector< const char*> names2 = { "LKOH", "SBER", "ROSN", "GAZP" };
			char a = ' V ';
			string n = "LKOH";*/
			/* for (size_t i = 0; i < 4; i++)
			 {
				 cout << names2[i] << endl;
			 }*/



			int rt = 0;


			cout << " 5  " << endl;

			for (int t = 0; t < itog.size(); t++) {
				dataGridView1->Rows->Add();


				if (rt == 4) { rt = 0; }

					if (rt == 0) {
						dataGridView1->Rows[t]->Cells[0]->Value = "LKOH";
					}
					if (rt == 1) {
						dataGridView1->Rows[t]->Cells[0]->Value = "SBER";
					}
					if (rt == 2) {
						dataGridView1->Rows[t]->Cells[0]->Value = "ROSN";
					}
					if (rt == 3) {
						dataGridView1->Rows[t]->Cells[0]->Value = "GMKN";
					}
				

				++rt;





				dataGridView1->Rows[t]->Cells[1]->Value = itog[t].marketprice.ToString();
				dataGridView1->Rows[t]->Cells[2]->Value = itog[t].futureprice.ToString();
				dataGridView1->Rows[t]->Cells[3]->Value = itog[t].esentianalprice.ToString();
				dataGridView1->Rows[t]->Cells[4]->Value = itog[t].deltaprice.ToString();





			}

			//for(auto s : stockcopy) {
			   // //dataGridView1.Rows.Add(s);
			//}

		};



	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Ticker;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
















	private: System::ComponentModel::IContainer^ components;





	protected:






	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Ticker = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;

			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeColumns = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(5) {
				this->Ticker,
					this->Column1, this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Cursor = System::Windows::Forms::Cursors::Default;
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(551, 203);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Ticker
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Ticker->DefaultCellStyle = dataGridViewCellStyle3;
			this->Ticker->Frozen = true;
			this->Ticker->HeaderText = L"Ticker";
			this->Ticker->Name = L"Ticker";
			this->Ticker->ReadOnly = true;
			this->Ticker->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Ticker->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column1
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column1->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column1->HeaderText = L"Market Price";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column2
			// 
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column2->DefaultCellStyle = dataGridViewCellStyle5;
			this->Column2->HeaderText = L"Future Price";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column3
			// 
			dataGridViewCellStyle6->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column3->DefaultCellStyle = dataGridViewCellStyle6;
			this->Column3->HeaderText = L"Estimated Price";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// Column4
			// 
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopCenter;
			this->Column4->DefaultCellStyle = dataGridViewCellStyle7;
			this->Column4->HeaderText = L"Delta Price";
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(551, 203);
			this->Controls->Add(this->dataGridView1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Trading Opportunity";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		//dataGridView1->Printtt();
	}
	};

}