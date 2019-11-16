#include <iostream>
#include <string>

using namespace std;

int main(void)
{
  string s = "Hello,World";
  string d = "AoTian";
  string c = "wocao";

  s.replace(s.begin() + 6, s.end(), d);
  std::cout << s << std::endl;

  s.replace(6, 11, c);
  std::cout << s << std::endl;

  return 0;
}

