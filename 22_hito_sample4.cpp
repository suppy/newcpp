//hito_sample4.cpp
#include <iostream>
using namespace std;

class Hito
{
	int power;
public:
	Hito(int x) : power(x) {}
	virtual ~Hito() {};    //仮想デストラクタ
	void set_power(int x) { power = x; }
	int get_power() const { return power; }
	virtual void Jikosyoukai();  //仮想関数になる
};

//Hitoの派生クラスSamurai
class Samurai : public Hito
{
public:
	//Hitoのコンストラクタにxを渡す以外は何もしないコンストラクタ
	Samurai(int x) : Hito(x) {}
	//Hitoと同名のメンバ関数（これも仮想関数になる）
	void Jikosyoukai();  //基底クラスで同名の関数にvirtualを付けたので、ここにvirtualはいらない
};

//Hitoの派生クラスNinja
class Ninja : public Hito
{
public:
	//Hitoのコンストラクタにxを渡す以外は何もしないコンストラクタ
	Ninja(int x) : Hito(x) {}
	void Jikosyoukai();
};

//Hitoの派生クラスMatimusume
class Matimusume : public Hito
{
public:
	//Hitoのコンストラクタにxを渡す以外は何もしないコンストラクタ
	Matimusume(int x) : Hito(x) {}
	void Jikosyoukai();
};

void Hito::Jikosyoukai()
{
	power--;  //自己紹介に力を使ってpowerを1減らすことにする
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

void Ninja::Jikosyoukai()
{
	set_power(get_power() - 1);
	cout << "拙者は忍者でござる。" << endl;
	cout << "拙者のパワーは" << get_power() << "でござる。" << endl;
}

void Matimusume::Jikosyoukai()
{
	set_power(get_power() - 1);
	cout << "あたいは江戸っ娘よ。" << endl;
	cout << "あたいのパワーは" << get_power() << "よ。" << endl;
}

int main()
{
	Hito One(10);        //人
	Samurai Two(12);  //さむらい
	Ninja Three(14);     //忍者
	Matimusume Four(16);  //町娘
	Hito *p;       //Hitoのインスタンスへのポインタ。まだ、何も代入されていない。

	p = &One;
	p->Jikosyoukai();
	p = &Two;
	p->Jikosyoukai();
	p = &Three;
	p->Jikosyoukai();
	p = &Four;
	p->Jikosyoukai();
}