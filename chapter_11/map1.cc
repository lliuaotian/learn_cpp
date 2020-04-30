// 使用map
// map是一个关联容器
// 它里边存放的是键值对
// key value
// 从终端读取一行输入（输入的内容是姓名 手机号）
// 根据输入来输出对应姓名的手机号
// 输出姓名:手机号
#include <map>
#include <sstream>
#include <string>
#include <iostream>

using namespace std;

int main(void)
{
  map<string, string> people;

  // 保存终端输入
  string namePhone; 
  // 分别保存名字和手机号
  string name, phone;

  while(getline(cin, namePhone)) {
    if (namePhone == string("q")) {
      break;
    }

    istringstream info(namePhone);

    // liuaotian 123456 98765
    // liuaotian 150xxxxx
    info >> name;
    info >> phone;

    people[name] = phone;
    // people.insert({name, phone});
  }

  cin >> name;

  for (auto i : people) {
    if (i.first == name) {
      cout << "你要的信息已经找到!" << endl;
      cout << i.first << ":" << i.second << endl;
    }
  }
  

  return 0;
}
