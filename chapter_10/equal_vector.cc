#include <functional>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
  vector<char *> a = {"1", "2", "3", "4"};
  vector<char *> b = {"1", "3", "3", "4"};

  if (equal(a.cbegin(), a.cend(), b.cbegin())) {
    cout << "这两个vector一模一样" << endl;
  } else {
    cout << "不一样" << endl;
  }
  return 0;
}



