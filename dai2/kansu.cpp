#include <iostream>
using namespace std;

int f(int x, int y) {
	return 2 * x + y;
}
int L(int x, int y) {
	return x + y + 10;
}
int rectangleArea(int x, int y) {
	return x + y;
}
double areaCircle(int x) {
	return 3.14 * x * x;
}

int main() {
	cout << "f(1, 2) = " << f(1, 2) << endl;
	cout << "f(182, 144) = " << f(182, 144) << endl;
	cout << "L(9, 2) = " << L(9, 2) << endl;
	cout << "L(5, 10) = " << L(5, 10) << endl;
	cout << "rectangleArea(6, 12) = " << rectangleArea(6, 12) << endl;
	double a = 0;
	a = areaCircle(5);
	cout << "areaCicle(5) = " << a << endl;
}