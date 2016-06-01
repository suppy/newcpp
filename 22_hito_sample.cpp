//hito_sample.cpp
#include <iostream>
using namespace std;

//人を表すクラス
class Hito
{
	int power;
public:
	Hito(int x) : power(x) {}
	void set_power(int x) { power = x; }
	int get_power() const { return power; }
	void Jikosyoukai(); //自己紹介関数
};

void Hito::Jikosyoukai()
{
	power--; //自己紹介に力を使ってpowerを1減らすことにする
	cout << "俺は人だ。" << endl;
	cout << "俺のパワーは" << power << "だ。" << endl;
}

int main()
{
	Hito *p; //Hitoオブジェクトへのポインタ。まだ、何も代入されていない。
	p = new Hito(10); //パワーが10のHitoオブジェクトが生成され、そのアドレスがpに代入ｓれる。
	p->Jikosyoukai(); //pの指し示すオブジェクトについてJkosyoukai()を呼ぶ。
	delete p; //pの指し示すオブジェクトを破棄。
}