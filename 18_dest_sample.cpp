//dest_sample.cpp
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
	//デストラクタ
	~Nanika() {
		cout << "Nanikaのインスタンス" << datum << "が消滅しました。" << endl;
	}
};

int main()
{
	//プログラマがはじめから数値1、2を与えてインスタンスOne、Twoをつくる
	Nanika One(1), Two(2);

	One.func();
	Two.func();
}