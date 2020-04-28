#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  int i = 0;

  auto lambda_func = [i] () mutable -> void { i = 100; };

  lambda_func();
  cout << "i=" << i << endl;

  return 0;
}


