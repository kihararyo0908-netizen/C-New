#include <iostream>
using namespace std;

int score[] = {
	641, 703, 405, 598, 402, 752, 330,   0, 445, 662,
	254, 710, 467, 530, 548, 485, 244, 396, 601, 510,
	532, 687, 623, 420, 647, 587, 490, 647, 575, 688,
	764, 633, 712, 312, 655, 425, 722, 631, 680, 602,
};

int main() {
	int sum = 0;
	for (int i = 0; i < 40; ++i) {
		sum += score[i];
	}

	cout << "クラスの平均点は " << sum / 40.0
		<< " 点です。" << endl;

	for (int i = 0; i < 40; ++i) {
		cout << score[i] << endl;
	}
	int a[20];
	for (int i = 0; i < 20; ++i) {

	}
	cout << endl;
	int b = 0;
	int arr[] = {
		641, 703, 405, 598, 402, 752, 330, 0, 445, 662,
	};
	for (int i = 0; i < 10; ++i) {
		cout << i << endl;
		cout << arr[i] << endl;
	}

}