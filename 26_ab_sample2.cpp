//ab_sample2.cpp
#include <iostream>
#include <string>
using namespace std;

class Aru {
	int data;
public:
	Aru(int d) : data(d) {}
	int get_data() const { return data; }
};

class Betu
{
	Aru *a;  //Aruのポインタ
public:
	Betu();
	~Betu();
	//コピーコンストラクタ
	Betu(const Betu&); //宣言なので仮引数は省略した
	//代入演算子
	Betu& operator=(const Betu&); //宣言なので仮引数は省略した
	void input();
	void show() const;
	int get_data() const { return a->get_data(); } //新しく定義
};

//ポインタの0は「どこも指さない」という意味。後述。
Betu::Betu() : a(0) {}

Betu::~Betu() {
	delete a;
}

//コピーコンストラクタ
Betu::Betu(const Betu& x) {
	a = new Aru(x.get_data());
}

//代入演算子
Betu& Betu::operator=(const Betu& x) {
	if (this == &x)
		return *this; //自己代入
	delete a;
	a = new Aru(x.get_data());
	return *this;
}

void Betu::input() {
	int d;
	delete a;
	cout << "整数を入力してください：" << endl;
	cin >> d;
	a = new Aru(d);
}

void Betu::show() const {
	if (a == 0) return;  //ポインタがどこも指し示していなければ終了
	cout << "データ：" << a->get_data() << endl;
}

int main()
{
	Betu one;
	one.input();
	one.show();
}