#include <iostream>
using namespace std;

int DivMod(int x, int y, int& r, int& z, int& s) {
	r = x % y;
	z = x + y;
	s = x - y;
	return x / y;
}

int DM(int x, int y, int& r) {
	r = x % y;
	return x / y;
}

int IV(int x, int y, int& r) {
	r = x + y;
	return x - y;
}

int BMW(int x, int y, int& r) {

    r = x + y;
	return x - y;
}
int main() {
	int a = 10;
	int b = 3;
	int r = 0;
	int p = 0;
	int o = 0;
	int x = DivMod(a, b, r, p, o);

	cout << "商 =" << x << endl;
	cout << "引き算 " << p << endl;
	cout << "足し算 " << o << endl;
	cout << "余り =" << r << endl;

	int ret = 0;
	int k = 0;
	ret = DM(10, 20, k);
	cout << ret << " " << k << endl;

	int s = 10;
	int z = 5;
	int c;

	int m = IV(s, z, c);
	cout << "引き算 =" << m << endl;
	cout << "足し算 =" << c << endl;

	int mj = 0;
	int h = 0;
	mj = BMW(5, 4, h);
	cout << mj << " " << h << endl;
}