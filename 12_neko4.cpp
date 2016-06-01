//neko4.cpp
#include <iostream>
#include <string>  //stringを使うために必要
using namespace std;

class Neko
{
	string name;  //名前
	int tairyoku; //体力
public:
	Neko(string n) : name(n), tairyoku(10) {}
	int syokuji();  //食事を（ユーザから）もらう関数
	int naku();     //鳴く関数
};

int Neko::syokuji() {
	cout << name << "に食事をさせます。どれだけ食べさせますか？" << endl;
	cout << "半角の数字で入力してください。" << endl;
	int food;          //食べさせる量　ユーザに決めてもらう
	cin >> food;
	tairyoku += food;
	return tairyoku;   //tairyokuの値を戻す
}

int Neko::naku()
{
	cout << "にゃあ。俺様は" << name << "だ。" << endl;
	tairyoku -= 5;
	return tairyoku;   //tairyokuの値を戻す
}

int main()
{
	cout << "猫をメモリ上に生成します。名前を決めてください。" << endl;
	string temp;
	cin >> temp;
	Neko kai_neko(temp);  //飼い猫の生成　名はユーザがtempに入力したもの
	cout << endl;
	for (int i = 0; i < 5; i++) {  //５回だけメモリ上の猫と遊ぶプログラムです
		cout << "どうします？" << endl;
		cout << "1 食事を与える　2 鳴かす" << endl;
		cout << "半角の数字で入力してください。" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			int t;
			t = kai_neko.syokuji();  //まず、Neko::syokujiの内容が実行され、その結果の体力が
									 //Neko::syokujiの戻り値として与えられ、tに代入される。
			cout << "猫の体力＝" << t << endl;
		}
		else if (ans == 2) {
			int t;  //上のtとは別の｛　｝ブロック内にあるので全く無関係
			t = kai_neko.naku();  //まず、Neko::nakuの内容が実行され、その結果の体力が
								  //Neko::nakuの戻り値として与えられ、tに代入される。
			cout << "猫の体力＝" << t << endl;
			if (t < 0) {
				cout << "食事が不十分だったので、猫は隣のお金持ちの家に行ってしまいました。" << endl;
				break;  //for文からぬけろという命令　体力が負になったらおしまいということです
			}    //if(t<0)のかっこ閉じる
		}        //if(ans==2)のかっこ閉じる
		cout << endl; //見やすさのための改行
	}            //for(i=0;i<5;i++)のかっこ閉じる
	cout << "おわり" << endl;
}