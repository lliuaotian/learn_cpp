#include <iostream>
#include <string>

using namespace std;

void replace(string & a, string b, string c) {
  auto start = a.find(b);
  auto end = start + b.size();
  a.replace(start, end, c);

}

int main(void)
{
  string test = "Hello, World";

  replace(test, "World", "AoTian");

  std::cout << test << std::endl;
  

  return 0;
}

