#include <iostream>

using namespace std;

template <typename T>
void myswap(T &a, T &b) {
  T c;
  c = a;
  a = b;
  b = c;
  cout << "函数模板进行中..." << endl;
}


int main(int argc, char *argv[])
{
  
  int a = 10;
  int b = 20;

  myswap(a, b);
  cout << "a=" << a << "\t\t" << "b=" << b << endl;
  cout << "END" << endl;


  return 0;
}

