#include <iostream>
using namespace std;

void ShowAddresses(char* pointer) {
	cout << "pointer     : " << sizeof pointer << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&pointer[" << i << "] ; " << sizeof &pointer[0] << endl;
	}
}

int main() {
	char array[10];

	cout << "arrray	    : " << (size_t) array << endl;
	for (int i = 0; i < 10; ++i) {
		cout << "&array[" << i << "]   : " << (size_t) & array[i] << endl;
	}
	cout << endl;

	ShowAddresses(array);
}