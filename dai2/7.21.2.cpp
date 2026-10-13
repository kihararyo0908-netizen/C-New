#include <iostream>
using namespace std;
int k[5][3];
void show(int* p, int size) {
	for (int i = 0; i < size; i++) {
		cout << p[i] << endl;
	}
}

int main() {
	show(&k[0][0], 15);
}