#include <iostream>

using namespace std;

int main(void)
{
  int val;
  // 错误示范
  // cin >> val;
  // $:./a.out
  // in:hello
  // error //程序自动结束，因为你试图将字符串赋值到int类型.
  // $:./a.out
  // in:1
  // out:1
  // in:2
  // out:2
  while (cin >> val) {
    cout << val << endl;
  }

  return 0;
}

