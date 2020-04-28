#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
  vector<string> a;
  a.push_back("fox");
  a.push_back("jumps");
  a.push_back("fox");
  a.push_back("quick");
  a.push_back("read");
  a.push_back("write");
  a.push_back("quick");

  sort(a.begin(), a.end());

  for (auto i : a) {
    cout << i << endl;
  }


  cout << "--------" << endl;

  auto end_unique = unique(a.begin(), a.end());
  a.erase(end_unique, a.end());

  vector<string> d;
  d.assign(a.begin(), end_unique);


  for (auto i : d) {
    cout << i << endl;
  }

  cout << "--------" << endl;
  
  for (auto i : a) {
    cout << i << endl;
  }
  

  return 0;
}


