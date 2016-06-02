//hito_sample5.cpp
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
	Hito *x[5]; //Hitoへのポインタを5つ用意

	//オブジェクトの生成と、そのアドレスのポインタへの代入
	x[0] = new Samurai(12);
	x[1] = new Samurai(15);
	x[2] = new Ninja(7);
	x[3] = new Ninja(8);
	x[4] = new Matimusume(18);

	//以下2行がこのサンプルのポイント
	for (int i = 0; i < 5; i++) {
		x[i]->Jikosyoukai();
	}

	//オブジェクトの破棄
	for (int i = 0; i < 5; i++) {
		delete x[i];
	}
}