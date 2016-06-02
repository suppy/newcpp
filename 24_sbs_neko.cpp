//sbs_neko.cpp
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
	//純粋仮想関数
	virtual int get_nensyu() const = 0;
};

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

//「サラリー猫」の派生クラス「サラリー猫・ウイズ・ボーナス」。もう英語むちゃくちゃ。
class SalaryNekoWithBonus :public SalaryNeko
{
	int bonus;  //月給の何ヶ月分かを表す
public:
	//コンストラクタ
	//第1引数が名前、第2引数が月給、第3引数がボーナスを表す
	SalaryNekoWithBonus(string, int, int);
	//年収（月給＋ボーナス）を戻す関数
	int get_nensyu() const { return get_gekkyu() * (12 + bonus); }
};

//「猫」の派生クラス「資産家猫」
class SisankaNeko : public Neko
{
	int sisan;  //資産、万円単位
public:
	SisankaNeko(string, int);     //コンストラクタ
								  //年収を戻す関数。年収は資産の利子のみで、利率は2%とする。
	int get_nensyu() const { return sisan * 2 / 100; }
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "にゃあ。俺様は" << name << "だ。" << endl;
}

SalaryNeko::SalaryNeko(string s, int x) : Neko(s), gekkyu(x) {}  //コンストラクタ

SalaryNekoWithBonus::SalaryNekoWithBonus(string s, int g, int b) : SalaryNeko(s, g), bonus(b) {}

SisankaNeko::SisankaNeko(string n, int s) : Neko(n), sisan(s) {}

int main()
{
	int syurui;     //Nekoの種類を一時格納する場所
	string name;  //名前の一時格納場所
	int gekkyu;    //月給の一時格納場所、簡単のため今回は昇給はさせません。
	int bonus;     //ボーナスが月給の何ヶ月分かを一時的に格納。
	int sisan;      //資産の一時格納場所

	Neko *cat[5];   //5猫（ごにんと読む）分のNekoポインタ

					//データの入力
	cout << "5猫のデータを入力します。" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "職業を決めてください。" << endl;
		cout << "1 サラリー猫（ボーナスなし）　2 ボーナスありのサラリー猫　3 資産家猫" << endl;
		cout << "（半角入力ですぜ！）" << endl;
		cin >> syurui;
		cout << "名前を入力してください：";
		cin >> name;
		switch (syurui) {
		case 1:
			cout << "月給（万円単位で整数）を入力してください。" << endl;
			cin >> gekkyu;
			cat[i] = new SalaryNeko(name, gekkyu);
			break;
		case 2:
			cout << "月給（万円単位で整数）を入力してください。" << endl;
			cin >> gekkyu;
			cout << "ボーナスは月給の何ヶ月分か入力してください。（整数で）" << endl;
			cin >> bonus;
			cat[i] = new SalaryNekoWithBonus(name, gekkyu, bonus);
			break;
		case 3:
			cout << "資産（万円単位で整数）を入力してください。" << endl;
			cin >> sisan;
			cat[i] = new SisankaNeko(name, sisan);
			break;
		}
	}

	cout << "それでは各自自己紹介します。よろしいですか？" << endl;
	cout << "1 はい　2 いいえ" << endl;
	cin >> syurui;
	//ユーザが1以外の整数を入力したら終了
	if (syurui != 1) return 0; //mainの中での「return 0;」はmainを終了させる

	for (int i = 0; i < 5; i++) {
		cat[i]->naku();
		cout << "年収：" << cat[i]->get_nensyu() << "万円" << endl;
	}

	//後始末
	for (int i = 0; i < 5; i++)
		delete cat[i];

	cout << "おしまい" << endl;
}