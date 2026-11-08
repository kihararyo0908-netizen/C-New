#include <iostream>
using namespace std;

// s1の中からs2を探し、一致した場所へのポインタを返す関数
const char* str_match(const char* s1, const char* s2);

int main() {

	// 検索対象の文字列
	const char* s1 = "abcabcdef";
	// 探索したい文字列
	const char* s2 = "abcd";

	// 検索実行 
	const char* p = str_match(s1, s2);

	// 見つかった場合
	if (p != nullptr) {
		cout << p << endl;
	}
	// 見つからなかった場合
	else {
		cout << "見つかりません" << endl;
	}
	return 0;
}

// s1の中からs2を探す関数
const char* str_match(const char* s1, const char* s2) {

	// s1の終端まで調べる
	while (*s1) {
		// 比較用ポインタ
		const char* p1 = s1;
		const char* p2 = s2;

		// 文字が一致している間は次の文字へ進む
		while (*p1 && *p2 && *p1 == *p2) {
			p1++;
			p2++;
		}
		// s2の最後まで到達したら一致
		if (*p2 == '\0') {
			return s1;
		}
		// 検索開始位置を1文字後ろにずらす
		s1++;
	}
	// 見つからなかった
	return nullptr;
}