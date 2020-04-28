#include <list>
#include <algorithm>
#include <stdio.h>

int main()
{
  std::list<int> List;
  List.push_back(100);
  List.push_back(200);
  List.push_back(300);
  List.push_back(100);
  int findValue = 100;

  auto it = std::find_if(List.begin(), List.end(), [findValue](const int value)
      {
      return (value == findValue);
      });

  if (it != List.end())
  {
    for (; it != List.end(); ++it)
    {
      printf("%d\n", * it);
    }
  }
  return 0;
}
