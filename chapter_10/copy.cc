#include <algorithm>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  int a1[] = {1, 2, 3, 4, 5};
  int a2[sizeof(a1) / sizeof(*a1)];

  auto ret = copy(begin(a1), end(a1), a2);

  for (auto i : a2) {
    cout << i << endl;
  }

  return 0;
}

