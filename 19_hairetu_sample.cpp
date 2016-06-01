//hairetu_sample.cpp
//10人の学生の点数を入力し、その平均値を計算するプログラム
#include <iostream>
using namespace std;

int tensu[10];

int main()
{
	int sum = 0;  //sumは合計点、ただし、ここではじめは0と置いておく。説明参照。
	cout << "10人の学生の点数を順番に入力してください。" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tensu[i];
	}
	cout << "それでは平均を計算します。" << endl;
	for (int i = 0; i < 10; i++) {
		sum += tensu[i];
	}
	cout << "平均点は" << sum / 10 << "です。" << endl;
	//上のように出力の文に計算式を書いてもかまいません。
}