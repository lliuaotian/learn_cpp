#include <algorithm>
#include <iostream>
#include <vector>


using namespace std;

int main(void)
{
  vector<int> v = {33, 23, 43, 42};
  vector<int> u;

  vector<string> b;
  auto c = back_inserter(b);
  *c = string("Hello ");
  *c = string("World");

  replace(v.begin(), v.end(), 33, 42);
  replace(v.begin(), v.end(), 23, 42);
  replace(v.begin(), v.end(), 43, 42);
  

  replace_copy(v.cbegin(), v.cend(), back_inserter(u), 42, 11);

  for (auto i : v) {
    cout << i << endl;
  }

  for (auto i : u) {
    cout << i << endl;
  }
  

  return 0;
}
