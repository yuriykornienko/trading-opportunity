#pragma once
using namespace MySql::Data::MySqlClient;
using namespace std;
using namespace System;
using namespace System::Data;
using namespace System::Collections::Generic;
using namespace System::Windows;
using namespace System::Text;
#include <stdlib.h>


#include <cppconn/prepared_statement.h>
#include "mysql_connection.h"
#include <cppconn/driver.h> 
#include <cppconn/exception.h> 
#include <cppconn/statement.h> 
#include <iostream> 
#include <mysql_connection.h> 
#include <mysql_driver.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <vector>

#include<string>




class MyRez {
public:
	 string name;
	double marketprice;
	double futureprice;
	double esentianalprice;
	double	deltaprice;
	MyRez(string name, double marketprice, double futureprice, double esentianalprice, double	deltaprice) {
		this->name = name;
		this->marketprice = marketprice;
		this->futureprice = futureprice;
		this->esentianalprice = esentianalprice;
		this->deltaprice = deltaprice;

	}
	MyRez(char name) { this->name = name; }
	MyRez(string name) { this->name = name; }
	MyRez( double marketprice) {  this->marketprice = marketprice; }
	/*MyRez(string futureprice) { this->futureprice = futureprice; }
	MyRez(string esentianalprice) { this->esentianalprice = esentianalprice; }
	MyRez(string deltaprice){ this->deltaprice = deltaprice; }*/



};


vector< MyRez> itog;



namespace Mysql_test {

	public class SQLtest {
	public:
		SQLtest() {
			try {

				sql::mysql::MySQL_Driver* driver = sql::mysql::get_mysql_driver_instance();
				sql::Connection* con = driver->connect("tcp://localhost:3306",
					"root", "123123");

				con->setSchema("test3"); // your database name 

				sql::Statement* stmt;
				stmt = con->createStatement();

				cout << " 1  " << endl;

				string clear = "TRUNCATE Markets";
				//stmt->executeUpdate(updateDataSQL3); //обновление ячеек
				//stmt->execute(clear); //очистка всей таблицы
			//	stmt->execute(insertDataSQL2); // создание таблицы

				// SQL query to retrieve data from the table 
				string selectDataSQL = "SELECT * FROM Markets";

				sql::ResultSet* res = stmt->executeQuery(selectDataSQL);

				// SQL query to retrieve data from the table 


				cout << " 2  " << endl;
				int index = 0;
				while (res->next()) {

					itog.push_back(MyRez((res->getString("securities"))));
					itog[index].marketprice = (res->getDouble("marketprice"));
					itog[index].futureprice = (res->getDouble("futureprice"));
					itog[index].esentianalprice = (res->getDouble("esentianalprice"));
					itog[index].deltaprice = (res->getDouble("deltaprice"));

					cout << " 3  " << endl;
					++index;
				}


				cout << " 4  " << endl;

				delete res;
				delete stmt;
				delete con;
			}
			catch (sql::SQLException& e) {
				std::cerr << "SQL Error: " << e.what() << std::endl;
			};
		};
	};
}