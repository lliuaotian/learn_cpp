#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

map<string, string> stringMap = {
  {"k", "okey"},
  {"y", "why"},
  {"r", "are"},
  {"u", "you"},
  {"l", "love"},
  {"p", "please"},
};

void outputString(istringstream& input) {
  string info;
  while (input >> info) {
    auto map_it = stringMap.find(info);

    if (map_it != stringMap.cend()) {
      cout << map_it->second << " ";
    } else {
      cout << info << " ";
    }
  }
  cout << endl;
}

int main(void)
{

  string input;

  while (getline(cin, input)) {
    istringstream inputStream(input);

    outputString(inputStream);
  }

  return 0;
}
