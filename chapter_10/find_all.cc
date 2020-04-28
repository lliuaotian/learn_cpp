#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
  vector<int> a;
  a.push_back(1);
  a.push_back(2);
  a.push_back(1);
  a.push_back(3);
  a.push_back(1);
  a.push_back(4);
  a.push_back(4);
  a.push_back(2);

  // 存储find的下标
  vector<int> b; 
  int find_int = 1;

  int count = 0;
  for_each(a.begin(), a.end(), [&count, &b, &find_int](int n) {
    if (n == find_int) {
      b.push_back(count);
    }
    count++;
  });
        
  for(auto i : b) {
    cout << i << endl;
  }

      

  return 0;
}
