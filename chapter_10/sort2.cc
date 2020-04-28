/* 
 * sort 谓词版本
 */
#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isShorter(const string &s1, const string &s2) {
  return s1.size() > s2.size();
}

int main(void)
{
  vector<string> a;
  a.push_back("Hello");
  a.push_back("World");
  a.push_back("Hello1");

  sort(a.begin(), a.end(), [](const string& s1, const string& s2) -> bool {
    return s1.size() < s2.size();
  });

  for (auto i : a) {
    cout << i << endl;
  }

  return 0;
}


