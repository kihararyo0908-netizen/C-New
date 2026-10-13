#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
	srand((unsigned int)time(nullptr));
	int arr[] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << "シャッフル前 :";
	for (int i = 0; i < size; ++i) cout << arr[i] << " ";
	cout << endl;

	// シャッフルアルゴリズム
	for (int i = size - 1; i > 0; --i) {
		int j = rand() % (i + 1);
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
	cout << "シャッフル後 :";
	for (int i = 0; i < size; ++i) cout << arr[i] << " ";
	cout << endl;
	return 0;
}