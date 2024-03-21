
//#include "pch.h"
//#include "pch.h"
#include "MyForm.h"
//#include <vector>
//#include "kod.h"
using namespace System;
using namespace System::Windows::Forms;
//vector<double> v = { 1,2,3,4,5 };

//using namespace std;

//sqtest.    ->Ma();



[STAThreadAttribute]
int main(cli::array<System::String^>^ args)
{

  //  Mysql_test::SQLtest::&Ma;


    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Mysql_test::SQLtest sqtest;

    proekt3::MyForm form;
    Application::Run(% form);
    //for (int r = 0; r < TABLE_ROW_COUNT - 1; r++)
    //{
    //    //dataGridView1.Rows.Add();
    //    Rows.Add();
    //   AddRow();
    //}
  //  Printtt();


    //for (int u = 0; u < 20; u++) {
    //     //// dataGridView1->Rows->Add();
    //     proekt3::dataGridView1->Rows[4]->Cells[4]->Value = u.ToString();
    //     }
    


    return 0;
}

//Ma()
//{
//    throw gcnew System::NotImplementedException();
//}
