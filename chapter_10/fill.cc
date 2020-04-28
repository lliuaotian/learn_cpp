#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main(void)
{
  vector<int> num = {1, 2, 3, 4, 5};
  fill(num.begin(), num.end(), 0);

  for (auto i : num) {
    cout << i << endl;
  }



  return 0;
}


