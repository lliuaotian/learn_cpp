#include <algorithm>
#include <iostream>
#include <array>



using namespace std;

int main(void)
{
  array<int, 7> ival = {12, 123213, 1231, 29, 54, 64, 44};

  int val = 29;

  /* auto result = find(begin(ival), end(ival), val); */
  auto result = find(ival.begin(), ival.end(), val);

  cout << "The value " << ( result == end(ival) ? " is not present" : " is present") << endl;
  


  return 0;
}

