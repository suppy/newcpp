//hito_sample3.cpp
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
	virtual void Jikosyoukai(); //仮想関数になる
};

//Hitoの派生クラスSamurai
class Samurai : public Hito
{
public:
	//Hitoのコンストラクタにxを渡す以外は何もしないコンストラクタ
	Samurai(int x) : Hito(x) {}
	//Hitoと同名のメンバ関数
	void Jikosyoukai(); //基底クラスでvirtual宣言しているので、これも仮想関数になる
};

void Hito::Jikosyoukai()
{
	power--; //自己紹介に力を使ってpowerを1減らすことにする
	cout << "俺は人だ。" << endl;
	cout << "俺のパワーは" << power << "だ。" << endl;
}

void Samurai::Jikosyoukai()
{
	set_power(get_power() - 1);
	//上はpowerの値をget_powerで取り出し、それから1減らした値をpowerにセットしている
	//つまり、これでpowerを1減らしたことになる
	cout << "俺はさむらいだ。" << endl;
	cout << "俺のパワーは" << get_power() << "だ。" << endl;
}

int main()
{
	Hito *p1, *p2; //Hitoオブジェクトへのポインタ。まだ、何も代入されていない。
	p1 = new Hito(10); //パワーが10のHitoオブジェクトが生成され、そのアドレスがp1に代入される。
	p1->Jikosyoukai(); //p1の指し示すオブジェクトについてJkosyoukai()を呼ぶ。
	p2 = new Samurai(12); //パワーが12のSamuraiオブジェクトが生成され、そのアドレスがp2に代入される。
	p2->Jikosyoukai(); //p2の指し示すオブジェクトについてJkosyoukai()を呼ぶ。
	delete p1; //p1の指し示すオブジェクトを破棄。
	delete p2; //p2の指し示すオブジェクトを破棄。実は問題あり。
}