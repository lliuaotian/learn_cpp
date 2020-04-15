// string流
#include <climits>
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

  for (const auto &entry : people) {
    ostringstream output;
    cout << "for" << endl;
    for (const auto &nums : entry.phones) {
      output << nums << "    ";
    }
    output << endl;
    cout << output.str();
    break;
  }




  
  return 0;
}

