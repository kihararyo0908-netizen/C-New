#include <iostream>
using namespace std;

int returns(int x, int y, int z) {
	return 3 * x + y + z;
}
double triangleArea(int x, int y) {
	return x * y / 2.0;
}
double trapezoidArea(int x, int y, int z) {
	return (x + y) * z / 2.0;
}
double parallelogramArea(int x, int y) {
	return x * y;
}
double circleLength(int x) {
	return 2.0 * 3.14 * x;
}
int main() {

	cout << "returns(2,3,3) = " << returns(2, 3, 3) << endl;
	double a = 0, b = 0, c = 0, d =0;
	a = triangleArea(5, 3);
	b = trapezoidArea(3, 2, 5);
	c = parallelogramArea(2, 5);
	d = circleLength(2);
	cout << "triangleArea(5,3) = " << a << endl;
	cout << "trapezoidArea(3,2,5) = " << b << endl;
	cout << "parallelogramArea(2,5) = " << c << endl;
	cout << "circleLngth(2) = " << d << endl;
}
