//Glass3.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                    //水の量
public:
	Glass(int x) : nakami(x) {}     //引数を取るコンストラクタ
									//ユーザかプログラマに渡される値（xで表される）をnakamiに格納
	void dasu(int);                //水を出す関数 
};

void Glass::dasu(int x) {
	if (nakami >= x) {
		nakami -= x;
		cout << "水を出しました。" << endl;
		cout << "現在のコップの中身は" << nakami << "です。" << endl;
	}
	else {
		cout << "そんなに水がありません。" << endl;
		cout << "現在コップの中には" << nakami << "入っているだけです。" << endl;
	}
}

int main()
{
	int x;  //整数の「いれもの」xの定義。下のcinの前ならどこにあってもよいのです。
	cout << "コップを生成します。どれだけ水をいれるか入力してください。" << endl;
	cin >> x;
	Glass glass(x);  //引数を取るコンストラクタが呼び出され、
					 //水がxだけ入ったglassという名のコップが生成される
	cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" << endl;
	cin >> x;        //上のxを使いまわしている
	glass.dasu(x);
	cout << "終了" << endl;
}