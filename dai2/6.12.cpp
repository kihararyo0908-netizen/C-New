#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>  // strcpy　を使うために必要
using namespace std;

int my_strcmp(const char x1, const char y1) {
	while (x1 != '\0' && y1 != '\0') {
		if (x1 != y1) {
			return x1 - y1;
		}
	}
	return x1 - y1;
}

int main() {
	char src[] = "Hello";
	char dst[10];

	strcpy(dst, src);  // src の内容を dst にコピー (dst,src)のdstは変数でsrcは一応なんでもいい
	
	cout << dst << endl;  // 出力: Hello

	char a[16] = "";

	strcpy(a, "ABC");
	cout << a << endl;

	char x[20] = "Hello";
	char y[] = "World";
	strcat(x, y);  //xの末尾にyを追加
	cout << x << endl; // Hallo World

}