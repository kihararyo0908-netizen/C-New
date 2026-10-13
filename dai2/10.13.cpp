#include <iostream> // 標準ライブラリ（入出力）　

using namespace std;

// ----------------------------
// 関数の宣言(hennsuu.cpp に中身がある)
// ----------------------------
double TriangleArea(double base, double height); // 三角形
double TrapezoidArea(double top, double bottom, double height1); // 台形
double CircleArea(double radius); // 円
int main() {

	// ------------------------------
	// 三角形の面積を求める処理
	// ------------------------------
	double base, height;

	cout << "底辺の入力:";
	cin >> base; // 底辺を入力

	cout << "高さの入力:";
	cin >> height; // 高さを入力

	// hennsuu.cpp にある　TriangleArea() を呼び出す
	double area = TriangleArea(base, height);
	cout << "三角形の面積は" << area << "です。" << endl;
	cout << endl; 

	// ------------------------------
	// 台形の面積を求める処理
	// ------------------------------
	double top, bottom, height1;

	cout << "上底の入力:";
	cin >> top; // 上底を入力

	cout << "下底の入力:";
	cin >> bottom; // 下底を入力

	cout << "高さの入力:";
	cin >> height1; // 高さを入力

	// hennsuu.cpp にある　TrapezoidArea() を呼び出す
	double area1 = TrapezoidArea(top, bottom, height1);
	cout << "台形の面積は" << area1 << "です。" << endl;
	cout << endl;

	// ----------------------------
	// 円の面積を求める処理
	// ----------------------------
	double radius;

	cout << "半径の入力:";
	cin >> radius; // 半径を入力

	// hennsuu.cpp にある CircleArea() を呼び出す
	double area2 = CircleArea(radius);
	cout << "円の面積は" << area2 << "です。" << endl;
	return 0; // 正常に終了
}