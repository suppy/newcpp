//Glass4.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                 //水の量
public:
	//コンストラクタを2つ書く
	Glass() : nakami(10) {}      //引数を取らないコンストラクタ
	Glass(int x) : nakami(x) {}  //引数を取るコンストラクタ
	void dasu(int);             //水を出す関数
};

void Glass::dasu(int x) {
	if (nakami - x >= 0) {
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
	int x;
	cout << "水量10のコップ（glass）を生成します。" << endl;
	Glass glass;        //引数を取らないコンストラクタが呼び出される
						//水が10だけ入ったglassという名のコップが生成さる
	cout << "さあ、glassから水を出します。いくら出しますか。入力してください。" << endl;
	cin >> x;           //上のxを使いまわしている
	glass.dasu(x);

	cout << "水量20のコップ（glass2）を生成します。" << endl;
	Glass glass2(20);    //引数を取るコンストラクタが呼び出される
						 //水が20だけ入ったglass2という名のコップが生成される
	cout << "さあ、glass2から水を出します。いくら出しますか。入力してください。" << endl;
	cin >> x;            //上のxを使いまわしている
	glass2.dasu(x);
	cout << "終了" << endl;
}