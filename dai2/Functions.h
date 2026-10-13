#pragma once
// ----------------------------
// hennsuu.h
// 図形の面積を計算する関数の「宣言」だけを書くファイル
// *ここには return を含む「中身(実装)」は書かない
// ----------------------------

// ----------------------------
// 三角形の面積を求める関数の宣言
// base   : 底辺
// height : 高さ
// ----------------------------
double TriangleArea(double base, double height);

// ----------------------------
// 台形の面積を求める関数の宣言
// top    : 上底
// bottom : 下底
// height : 高さ
// ----------------------------
double TrapezoidArea(double top, double bottom, double height1);

// ----------------------------
// 円の面積を求める関数の宣言
// radius : 半径
// ----------------------------
double CircleArea(double radius);