// mutable
#include <iostream>

using namespace std;

int main(void)
{
  int i = 0;


  // 值捕获    =
  // 引用捕获  &
  auto lambda_func = [&i] () -> void { i = 100; };


  lambda_func();
  cout << i << endl;


  return 0;
}


