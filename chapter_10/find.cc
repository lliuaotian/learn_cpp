#include <algorithm>
#include <iostream>
#include <vector>



using namespace std;

int main(void)
{
  vector<int> test = {1, 213, 232, 22, 22, 22, 33, 44, 55};

  auto a = find(test.begin(), test.end(), 777);


  if (a == test.end()) {
    cout << "没有该值" << endl;
  } else {
    cout << *a << endl;
  }

    

  return 0;
}

