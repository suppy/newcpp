#include <iostream>
using namespace std;

//英語の教科書によくあるThingをなめてNanikaとしたのですが、なんか不気味ですね。
class Nanika
{
	int datum;
public:
	//引数を取らないコンストラクタ
	Nanika() : datum(0) {
		cout << "Nanikaのインスタンス" << datum << "が生成されました。" << endl;
	}
	//引数を取るコンストラクタ
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
	//Nanikaのポインタをまず用意。これはポインタであってオブジェクトはまだない。
	Nanika *p;
	cout << "Nanikaのオブジェクトを生成" << endl;
	p = new Nanika(1);
	//上ではNanikaのコンストラクタに「1」が渡され、オブジェクトが生成される。
	//引数に「1」を選んだのに意味はない。
	//pはポインタなので、メンバ関数を呼び出すのに、「.」ではなく「->」を使う。
	p->func();

	//ポインタpで示されているインスタンスを消滅させる。
	delete p;
}