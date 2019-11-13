#include <vector>
#include <iostream>

using namespace std;

int main(void) {
	vector< int > b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	b.push_back(6);
	b.push_back(7);
	b.push_back(8);
	b.push_back(9);

	for (auto begin = b.begin(); begin != b.cend(); begin++) {
		// 1 2 3迭代器
		// *begin == 5;
		if (*begin == 3 or *begin == 4) {
			auto c = *begin;
			b.erase(begin);
			// *begin == 3;
			// begin++;
			// *begin == 4;
			cout << "找到垃圾，并且成功清除" << endl;
			begin--;
			// begin = begin - 1;
			// 4 - 1 3  2
			// *begin == 2;
			cout << "垃圾为:" << c << endl;
		}
	}

	for (auto i : b) {
		cout << i << endl;
	}



	return 0;
}
