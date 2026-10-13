#include <iostream>
using namespace std;

int sum(int x, int y) {
	return x + y;
}
int sum3(int x, int y, int z) {
	return x + y + z;
}
int pow2(int x) {
	return x * x;
}

int main() {
	int a = 5;
	a= a + 3;
	cout << a << endl;

	cout << "sum(3, 5) = " << sum(3, 5) << endl;

	cout << "sum3(3, 5, 2) = " << sum3(3, 5, 2) << endl;

	cout << "pow2(2) = " << pow2(2) << endl;
}