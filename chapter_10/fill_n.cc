#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  a.push_back(5);

  fill_n(a.begin(), a.size(), 0);

  for (auto i : a){
    cout << i << endl;
  }
  

  return 0;
}


