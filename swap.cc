#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
  vector< string > a(10);
  vector< string > b(11);

  a.push_back("Hello,World");
  b.push_back("Hello,Aotian");

  for (auto i : a) {
    if (i.empty()) {
      continue;
    }
    cout << i << endl;
  }

  swap(a, b);

  for (auto i : a) {
    if (i.empty()) {
      continue;
    }
    cout << i << endl;
  }


  return 0;


}
