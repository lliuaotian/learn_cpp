/* 
 * find_if lambda版本
 */
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void)
{
  vector<string> a;
  a.push_back("Hello");
  a.push_back("World");
  a.push_back("Hello1");
  a.push_back("a");
  a.push_back("c");

  string d("ad");
  sort(a.begin(), a.end());

  auto c = find_if(a.begin(), a.end(), [&d](const string& s1) -> bool {
    return (d.size() < s1.size()) ? true : false;
  });

  if (c != a.end()) {
    for (; c != a.end(); ++c) {
      cout << *c << endl;
    }
  };

  

  return 0;
}


