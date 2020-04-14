// related 关联 有关
// stream  流
// related_stream related stream 我想翻译成流关联的意思
// 流关联 比如cin关联cout 任何试图从cin读取数据的操作都会首先刷新他所关联的输出流，也就是cout
//
#include <iostream>
#include <fstream>
#include <string>


using namespace std;

int main(void)
{
  // cin.tie() 没有参数会返回output stream
  ofstream file_p("/tmp/test.txt");
  file_p << "Hello World" << endl;

  // 读取cin数据时会优先刷新file_p的数据
  cin.tie(&file_p);

  // 刷新file_p的数据，然后在写入内容
  cin.get();

  return 0;
}

