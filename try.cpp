#include <stdexcept>
#include <iostream>

using namespace std;

int main(void){
	try	{
		throw exception;
	} catch (runtime_error){
		cout << "Hello World" << endl;
	}
	cout << "end" << endl;


}
