#include <iostream>
using namespace std;

int main() {
	char hello[] = "Hello!";

	cout << "「" << hello << "」を文字コードに変えると" << endl;

	for (int i = 0; i < (int)sizeof hello; ++i) {
		cout << (int)(unsigned char)hello[i] << ", ";

	}
	cout << endl
		<< "になります。" << endl;
	hello[4] = '\0';
	cout << "「" << hello << "」文字コードに変えると" << endl;
	for (int i = 0; hello[i] != '\0'; ++i) {
		cout << (int)(unsigned char)hello[i] << ", ";
	}
	cout << 0 << endl
		<< "になります。" << endl;

	char str[] = "Hosaka";
	str[6] = 'A';
	cout << str;
}