//ab_sample.cpp
//実は問題があります。
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
	void input();
	void show() const;
};

//ポインタの0は「どこも指さない」という意味。後述。
Betu::Betu() : a(0) {}

Betu::~Betu() {
	delete a;
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