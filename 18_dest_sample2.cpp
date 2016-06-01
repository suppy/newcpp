//dest_sample2.cpp
#include <iostream>
using namespace std;

class Nanika
{
	int datum;
public:
	//コンストラクタ
	Nanika(int x) : datum(x) {
		cout << "Nanikaのインスタンス" << datum << "が生成されました。" << endl;
	}
	void func() const {
		cout << "Nanikaのインスタンス" << datum << "のfuncが呼ばれました。" << endl;
	}
	//datumの値を戻す関数をつけておく
	int get_datum() const { return datum; }
	//デストラクタ
	~Nanika() {
		cout << "Nanikaのインスタンス" << datum << "が消滅しました。" << endl;
	}
};

//Nanikaの派生クラス
class NanikaNoKo : public Nanika
{
public:
	//コンストラクタ
	NanikaNoKo(int x) : Nanika(x) {
		cout << "NanikaNoKoのインスタンス" << get_datum() << "が生成されました。" << endl;
	}
	//デストラクタ
	~NanikaNoKo() {
		cout << "NanikaNoKoのインスタンス" << get_datum() << "が消滅しました。" << endl;
	}
	void func() const {
		cout << "NanikaNoKoのインスタンス" << get_datum() << "funcが呼ばれました。" << endl;
	}
};

//NanikaNoKoの派生クラス
class NanikaNoMago : public NanikaNoKo
{
public:
	//コンストラクタ
	NanikaNoMago(int x) :NanikaNoKo(x) {
		cout << "NanikaNoMagoのインスタンス" << get_datum() << "が生成されました。" << endl;
	}
	~NanikaNoMago() {
		cout << "NanikaNoMagoのインスタンス" << get_datum() << "が消滅しました。" << endl;
	}
	void func() const {
		cout << "NanikaNoMagoのインスタンス" << get_datum() << "funcが呼ばれました。" << endl;
	}
};

int main()
{
	Nanika One(1), Two(2);
	NanikaNoKo Three(3);
	NanikaNoMago Four(4);

	One.func();
	Two.func();
	Three.func();
	Four.func();
}