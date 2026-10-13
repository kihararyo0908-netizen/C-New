#include <iostream>
using namespace std;

int main() {
	for (int i = 5; i < 10; i += 2) {
		cout << i << ' ';
	}
	cout << endl;

	for (int i = 10000; i < 10; ++i) {
		cout << i << endl;
	}

	int a = 0;
	for (int i = 0; a < 10; ++i) {
		cout << i << ", " << a << endl;
		a += 2;
	}

	for (; a < 10;) {
		cout << a << ' ';
		a += 2;
	}
}