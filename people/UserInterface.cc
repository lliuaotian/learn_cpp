#include <iostream>
#include <stdexcept>
#include "Database.h"

using namespace std;
using namespace Records;

int displayMenu();
void doHire(Database& inDB);
void doFire(Database& inDB);
void doPromote(Database& inDB);
void doDemote(Database& inDB);

int main(int argc, char *argv[])
{
  Database employeeDB;
  bool done = false;

  while (!done ) {
    int selection = displayMenu();

    switch (selection ) {
      case 1:
        doHire(employeeDB);
        break;
      case 2:
        doFire(employeeDB);
        break;
      case 3:
        doPromote(employeeDB);
        break;
      case 4:
        employeeDB.displayAll();
        break;
      case 5:
        employeeDB.displayCurrent();
        break;
      case 6:
        employeeDB.displayFormer();
        break;
      case 0:
        done = true;
        break;
      default:
        cerr << "未知命令。" << endl;
        
    }
  }


  return 0;
}

int displayMenu() {
  int selection;

  cout << endl;
  cout << "数据库" << endl;
  cout << "----------------------" << endl;
  cout << "1) 添加新员工" << endl;
  cout << "2) 解雇员工" << endl;
  cout << "3) 晋升员工" << endl;
  cout << "4) 列出全部员工" << endl;
  cout << "5) 列出当前员工" << endl;
  cout << "6) 列出以前员工" << endl;
  cout << "0) Quit" << endl;
  cout << endl;
  cout << "----> ";

  cin >> selection;

  return selection;
}


