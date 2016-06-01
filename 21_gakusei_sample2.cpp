//gakusei_sample2.cpp
#include <iostream>
using namespace std;

class Gakusei
{
	int sansu; //算数の点
public:
	//引数なしのコンストラクタ（これがないとプログラムはエラー）
	Gakusei() {} //何もしないので、中カッコ内は空
	//引数ありのコンストラクタ
	Gakusei(int x) { set_sansu(x); }
	void set_sansu(int x);
	int get_sansu() const { return sansu; }
	void input(); //入力のために新しく付けた
};

void Gakusei::set_sansu(int x) {
	if (x >= 100) {
		//xが100以上の時は、100を代入してしまう。
		x = 100;
	}
	sansu = x;
}

void Gakusei::input()
{
	int temp;
	cout << "算数の点を入力してください：";
	cin >> temp;
	set_sansu(temp);
}

int main()
{
	int ninzu, sum = 0;
	Gakusei *pm;
	cout << "学生の人数を入力してください。" << endl;
	cin >> ninzu;
	pm = new Gakusei[ninzu]; //引数を取らないコンストラクタが使われる
	cout << ninzu << "人の学生の点数を入力してください。" << endl;
	for (int i = 0; i < ninzu; i++) {
		pm[i].input();
	}
	cout << "それでは平均を計算します。" << endl;
	for (int i = 0; i < ninzu; i++) {
		sum += pm[i].get_sansu();
	}
	cout << "平均点は" << sum / ninzu << "です。" << endl;
	delete[] pm;
}