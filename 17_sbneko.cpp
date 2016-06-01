//sbneko.cpp
#include <iostream>
#include <string>
using namespace std;

//元祖「猫」
class Neko
{
	string name; //名前
public:
	Neko(string); //コンストラクタ
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "にゃあ。俺様は" << name << "だ。" << endl;
}

//「猫」の派生クラス「サラリー猫」
class SalaryNeko : public Neko
{
	int gekkyu; //月給
public:
	SalaryNeko(string, int); //コンストラクタ
							 //年収を戻す関数。年収は月給の12倍とする。
	int get_nensyu() const { return gekkyu * 12; }
	//月給を1万円増やす関数
	void syoukyu() { gekkyu++; }
	//新しく付け加える「月給の値を戻す関数」
	int get_gekkyu() const { return gekkyu; }
};

SalaryNeko::SalaryNeko(string s, int x) : Neko(s), gekkyu(x) {}  //コンストラクタ

																 //「サラリー猫」の派生クラス「サラリー猫・ウイズ・ボーナス」。もう英語むちゃくちゃ。
class SalaryNekoWithBonus :public SalaryNeko
{
	int bonus;  //月給の何ヶ月分かを表す
public:
	//コンストラクタ
	//第1引数が名前、第2引数が月給、第3引数がボーナスを表す
	SalaryNekoWithBonus(string, int, int);
	//年収（月給＋ボーナス）を戻す関数
	//SaralyNekoと同じ名前の関数、同じ名前でもよいのです。
	int get_nensyu() const { return get_gekkyu() * (12 + bonus); }
};

SalaryNekoWithBonus::SalaryNekoWithBonus(string s, int g, int b) : SalaryNeko(s, g), bonus(b) {}

//前回のmain()とほぼ同じだが、省ける中カッコを省いてみた。
int main()
{
	string name;  //名前の一時格納場所
	int gekkyu;    //月給
	int bonus;     //ボーナスが月給の何ヶ月分か

	cout << "サラリー猫・ウイズ・ボーナスをメモリ上に生成します。\n名前を決めて入力してください。" << endl;
	cin >> name;
	cout << "月給を決めて入力してください。（１万円単位）" << endl;
	cout << "（数字は半角で入力してください。）" << endl;
	cin >> gekkyu;
	cout << "ボーナスは月給の何ヶ月分か、入力してください。" << endl;
	cin >> bonus;
	SalaryNekoWithBonus dora(name, gekkyu, bonus);  //サラリー猫・ウイズ・ボーナスの生成
													//ループ。抜けるにはユーザが1、2、3以外の数字を入力すればよいようにする。
	while (1) {
		int ans;
		cout << "どうしますか？" << endl;
		cout << "1 鳴かす　2 年収を表示　3 昇給　4 やめる" << endl;
		cin >> ans;
		if (ans == 1)
			dora.naku();
		else if (ans == 2)
			cout << "年収は現在" << dora.get_nensyu() << "です。" << endl;
		else if (ans == 3) {
			dora.syoukyu();
			cout << "１万円昇給しました。" << endl;
		}
		else
			break;
		//見やすさのための改行
		cout << endl;
	}
	cout << "おしまい" << endl;
}