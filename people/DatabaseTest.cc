#include <iostream>
#include "Database.h"

using namespace std;
using namespace Records;

int main(int argc, char *argv[])
{
  Database myDB;
  
  Employee& emp1 = myDB.addEmployee("Liu", "Aotian");
  emp1.fire();

  Employee& emp2 = myDB.addEmployee("Lv", "Yulong");
  emp2.setSalary(100000);

  Employee& emp3 = myDB.addEmployee("Lv", "Mengyong");
  emp3.setSalary(10000);
  emp3.promote();

  cout << "all Employee: " << endl;
  cout << endl;
  myDB.displayAll();

  cout << endl;
  cout << "current Employee: " << endl;
  cout << endl;
  myDB.displayCurrent();

  cout << endl;
  cout << "former Employee: " << endl;
  cout << endl;
  myDB.displayFormer();

  return 0;
}


