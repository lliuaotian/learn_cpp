#include <iostream>


using namespace std;


int main(void)
{
  int val = 0;
  int cinState = 0;

  while (1) {
    cin >> val;

    cinState = cin.rdstate();
    // 输出错误时检查是什么错误，输出正确时忽略
    if (cinState != iostream::goodbit) {

      switch (cinState) {
        case iostream::eofbit :
          cout << "eof";
          goto end;
        case iostream::failbit :
          cout << "fail";
          goto end;
        case iostream::badbit :
          cout << "bad";
          goto end;
        default:
          cout << "Success:" << cinState << endl;
          continue;
      }
    }
  }

end:
  cout << ":" << cinState << endl;
  cout << "end" << endl;


  return 0;
}

