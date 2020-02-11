#include <iostream>
#include <string>



namespace Records {
  const int kDefaultStartingSalary = 30000;

  class Employee
  {
  public:
    Employee ();

    void promote(int inRaiseAmount = 1000); // 提升工资
    void demote(int inDemeritAmount = 1000);// 降低工资
    void hire();                            //聘请
    void fire();                            //解雇
    void display();                         //显示

    void        setFiretName(std::string inFirstName);
    std::string getFirstName();
    void        setLastName(std::string inLastName);
    std::string getLastName();
    void        setEmployeeNumber(int inEmployeeNumber);
    int         getEmployeeNumber();
    void        setSalary(int inSalary);
    int         getSalary();
    bool        getIsHired();

  private:
    /* data */
    std::string mFirstName;
    std::string mLastName;
    int         mEmployeeNumber;
    int         mSalary;
    bool        fHired;
  };

}

