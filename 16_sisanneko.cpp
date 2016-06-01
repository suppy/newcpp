//sisanneko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
	string name;    //名前
public:
	Neko(string);   //コンストラクタ
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "にゃあ。俺様は" << name << "だ。" << endl;
}

class SisankaNeko : public Neko
{
	int sisan;  //資産、万円単位
public:
	SisankaNeko(string, int);     //コンストラクタ
								  //年収を戻す関数。年収は資産の利子のみで、利率は2%とする。
	int get_nensyu() const { return sisan * 2 / 100; }
};

SisankaNeko::SisankaNeko(string n, int s) : Neko(n), sisan(s) {}

int main()
{
	string n;
	int s;
	cout << "資産家猫をメモリ上に生成します。名前を決めて入力してください。" << endl;
	cin >> n;
	cout << "資産を決めて入力してください。（単位：万円）" << endl;
	cout << "（数字は半角で入力してください。）" << endl;
	cin >> s;
	SisankaNeko dora(n, s);  //資産家猫の生成
							 //無限ループ。抜けるにはユーザが1、2以外の数字を入力すればよい。
	while (1) {
		cout << "どうしますか？" << endl;
		cout << "1 鳴かす　2 年収を表示　3 やめる" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			//Nekoの関数nakuをSisankaNekoが使う。
			dora.naku();
			//Nekoのnaku()はSisankaNekoでも使えるのです。
		}
		else if (ans == 2) {
			cout << "年収は現在" << dora.get_nensyu() << "万円です。" << endl;
		}
		//上のどれも成り立たない場合。ユーザには「3 やめる」と表示したが、
		//1、2以外ならループを抜けるようにした。
		else {
			break;
		}
		//見やすさのための改行
		cout << endl;
	}

	cout << "おしまい" << endl;
}