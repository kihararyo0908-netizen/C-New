#include "Functions.h"
// 自作ヘッダーファイルを読み込む
// ここで TriangleArea / TrapezoidArea / CircleArea の「宣言」を取得する
// （中身の実装はこの cpp に書く


// ----------------------------
// 三角形の面積を求める関数
// base   : 底辺
// height : 高さ
// ----------------------------
double TriangleArea(double base, double height) {

	// 三角形の面積 = 底辺 x 高さ ÷ 2
	// 2.0 は double(実数)で計算するため
	return (base * height) / 2.0f;
}

// ----------------------------
// 台形の面積を求める関数
// top     : 上底
// bottom  : 下底
// height1 : 高さ
// ----------------------------
double TrapezoidArea(double top, double bottom, double height1) {

	// 台形の面積 = (上底 + 下底) x 高さ ÷ 2
	return (top + bottom) * height1 / 2.0;
}

// ---------------------------
// 円の面積を求める関数
// radius : 半径
// ---------------------------

// 円周率を固定する (変更不可）
// const を使うことで「誤って値を書き換えられない」ようにする
const double PI = 3.14;
double CircleArea(double radius) {
	return PI * radius * radius;
}