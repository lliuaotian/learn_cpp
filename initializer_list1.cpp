//
// 可变形参
//
#include <iostream>
#include <initializer_list>
#include <string>

using namespace std;

void test(initializer_list< string > ls) {
	for (auto begin = ls.begin(); begin != ls.end(); begin++) {
		cout << *begin << endl;
	}

	cout << ls.size() << endl;
	cout << "END" << endl;

}

int main(void) {
	test({"woaini", "liuaotian", "shuai"});	



	return 0;
}
