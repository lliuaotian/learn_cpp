#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <iostream>



using namespace std;

int main(void)
{
  std::vector<int > vec;
  auto it = back_inserter(vec);

  fill_n(it, 10, 50);

  for (auto i : vec) {
    cout << i << endl; 
  }
    
    
    

  return 0;
}

