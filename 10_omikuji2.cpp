//omikuji2.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int un;  //ラッキーナンバー
	cout << "自分のラッキーナンバー（1～5）を入力してください。" << endl;
	cin >> un;  //自分のラッキーナンバーを代入
	srand((unsigned)time(NULL));
	int x;
	x = rand() % 5 + 1;  //引いたおみくじの番号
	cout << "あなたの運勢は";
	if (x == un) {                                            //xとunが等しければ大吉
		cout << "大吉ということです。" << endl;
	}
	else {                                                    //xとunが等しくなければ「普通」
		cout << "並みということです。" << endl;
	}
}