#include <iostream>
#include <stdexcept>
#include "Database.h"
#include <string>


using namespace std;

namespace Records {
  Database::Database() {
    mNextSlot = 0;
    mNextEmployeeNumber = kFirstEmployeeNumber;
  }

  Database::~Database() {
  }

  Employee& Database::addEmployee(std::string inFirstName, std::string inLastName) {
    if (mNextSlot >= kMaxEmployees) {
      cerr << "员工人员数满!!!!" << endl;
      throw exception();
    }

    Employee& theEmployee = mEmployees[mNextSlot];
    mNextSlot++;
    theEmployee.setFiretName(inFirstName);
    theEmployee.setLastName(inLastName);
    theEmployee.setEmployeeNumber(mNextEmployeeNumber);
    mNextEmployeeNumber++;
    theEmployee.hire();

    return theEmployee;
  }

  Employee& Database::getEmployee(int inEmployeeNumber) {
    for (int i = 0; i < mNextSlot; i++) {
      if (mEmployees[i].getEmployeeNumber() == inEmployeeNumber) {
        return mEmployees[i];
      }
    }

    cerr << "没有找到该员工" << endl;
    throw exception();
  }

  Employee& Database::getEmployee(string inFirstName, string inLastName) {
    for (int i = 0; i < mNextSlot; i++) {
      if (mEmployees[i].getFirstName() == inFirstName &&
          mEmployees[i].getLastName() == inLastName) {
        return mEmployees[i];
      }
    }

    cerr << "没有找到名字:" << inFirstName << inLastName << "用户的信息" << endl;
    throw exception();
  }

  void Database::displayAll() {
    for (int i = 0; i < mNextSlot; i++) {
      mEmployees[i].display();
    }
  }

  void Database::displayCurrent() {
    for (int i = 0; i < mNextSlot; i++) {
      if (mEmployees[i].getIsHired()) {
        mEmployees[i].display();
      }
    }
  }

  void Database::displayFormer() {
    for (int i = 0; i < mNextSlot; i++) {
      if (!mEmployees[i].getIsHired()) {
       mEmployees[i].display(); 
      } 
    }
  }

    
}



