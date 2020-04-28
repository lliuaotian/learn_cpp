#include <iostream>
#include <vector>
#include <algorithm>

#include <numeric>


using namespace std;

int main(void)
{
  vector<int> a = {1, 2, 3, 4, 5};

  auto b = accumulate(a.cbegin(), a.cend(), 0);

  cout << b << endl;
  
  return 0;
}

