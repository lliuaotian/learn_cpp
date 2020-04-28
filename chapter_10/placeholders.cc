// placeholders 占位符
// bind 绑定函数
#include <iostream>
#include <string>


using namespace std;

void in_output(string s1, string s2, string s3) {
  // s1 = name   s2 = hello    s3 happy or no happy
  cout << s1 << "  " << s2 << "  " << s3 << endl;
}

int main(void)
{
  auto bind_func = bind(in_output, std::placeholders::_1, string("hello"), std::placeholders::_2);

  bind_func(string("Liuaotian"), string("happy"));
  

  return 0;
}

