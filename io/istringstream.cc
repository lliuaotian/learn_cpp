// string流
#include <cstring>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>


using namespace std;

struct PersonInfo {
  string name;
  vector<string> phones;
};

int main(void)
{
  string line, word;
  vector<PersonInfo> people;

  while (getline(cin, line)) {
    if (line == string("q")) {
      break;
    }
    PersonInfo info;
    istringstream record(line);
    record >> info.name;
    while (record >> word) {
      info.phones.push_back(word);
    }
    people.push_back(info);
  }


  string name = people.at(0).name;
  string output;
  istringstream outputNamePhones(string("123871293871 1923812938"));
  cout << "你输入的内容是:" << endl;
  cout << "姓名:" << name << endl;
  while (outputNamePhones >> output) {
    cout << "电话:" << output << "    ";
  }
  cout << endl;

  
  return 0;
}

