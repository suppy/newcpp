//jimbutu_game.cpp
#include <iostream>
#include <cstdlib>  //乱数に必要、入門１０を参照
#include <ctime>   //乱数に必要
using namespace std;

//人物、剣士や占い師などの基底クラス
class Jimbutu
{
	int power;
public:
	//コンストラクタ、powerを初期化
	Jimbutu() : power(5) {}
	int get_power() const { return power; }
	//仕事をした後にパワーを減らす関数
	void decr_power() {
		power--;
		cout << "現在のパワー：" << power << endl;
	}
};

//剣士
class Kensi : public Jimbutu
{
public:
	void sigoto();  //剣士の仕事、定義はクラス宣言の外で、、、
};

void Kensi::sigoto()
{
	//get_power()でパワーを調べ、０以下なら何もしない。
	if (get_power() <= 0) {
		cout << "すまん。疲れているんだ。" << endl;
		return;  //この関数「sigoto」から抜ける。
	}
	cout << "俺は剣士だ。俺の剣技を見せてやる。" << endl;
	cout << "どりゃ～。おりゃ～。そりゃ～。、、、以上。" << endl;
	decr_power();  //Jimbutuの関数
}

//占い師
class Uranaisi : public Jimbutu
{
public:
	void sigoto();  //占い師の仕事、定義はクラス宣言の外で、、、
};

void Uranaisi::sigoto()
{
	//get_power()でパワーを調べ、０以下なら何もしない。
	if (get_power() <= 0) {
		cout << "わしゃ～占い師じゃが、腹減って動けんよ。" << endl;
		return;  //この関数「sigoto」から抜ける
	}
	cout << "私は占い師じゃ。今日のおまえの運勢を占ってやろうかの。" << endl;
	int x = rand() % 3;
	//上の１行は「int x;
	//　　　　　　x=rand()%3; 」 と同じ意味です

	if (x == 0) {
		cout << "おまえの今日の運勢は最高じゃ。" << endl;
	}
	else if (x == 1) {
		cout << "今日のおまえは、まあ、普通じゃな。" << endl;
	}
	else if (x == 2) {
		cout << "今日はおまえの厄日じゃ。何もせん方がよい。" << endl;
	}
	decr_power();  //Jimbutuの関数
}

int main()
{
	srand((unsigned)time(NULL));
	Kensi hero;    //剣士ヘロの誕生
	Uranaisi pero; //占い師ペロの誕生

	while (1) {
		int x;
		cout << "どうします？" << endl;
		cout << "1 剣士に仕事をしてもらう。 2 占い師に仕事をしてもらう。 3 やめる" << endl;
		cin >> x;
		if (x == 1) {
			hero.sigoto();
		}
		else if (x == 2) {
			pero.sigoto();
		}
		else {
			break;
		}
	}
	cout << "おしまい。" << endl;
}