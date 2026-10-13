#include <iostream>
#include <algorithm>
using namespace std;

void CheckAddress_Sub();
void CheckAddress_Sub2();

void CheckAddress() {
	cout << "アドレスが常に一定かのチェック" << endl;

	CheckAddress_Sub();
	CheckAddress_Sub2();
	CheckAddress_Sub();
}

void CheckAddress_Sub() {
	static int a;
	int b;
	cout << "&a = " << (size_t)&a << endl
		<< "&b = " << (size_t)
}