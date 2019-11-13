#include <iostream>

using namespace std;

auto add(int i, int c) -> int * {
	int d = 4;
	int *e = &d;
	return e;
}

int main(void){
	int a = 1;
	int b = 2;

	int *g = add(a, b);

}
