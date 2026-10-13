#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int ma[][5] = {
		{ 56, 28, 39, 10, 70},
		{  2, 40, 60, 90, 46},
		{ 29, 30, 74, 58, 32},
		{ 79, 32, 12, 90, 54},
		{ 87, 98, 97, 87, 92},
	};
	for (int i = 0; i < 5; i++) {
		int a = 0;
		for (int j = 0; j < 5; j++) {
			a += ma[i][j];
			cout << a << endl;
			cout << a / 5.0 << endl;
		}
		
	}
}