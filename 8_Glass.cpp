//Glass.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                    //水の量
public:
	Glass() : nakami(10) {}         //引数を取らないコンストラクタ
	void dasu() { nakami -= 2; }    //水を出す関数
									//「nakami -= 2;」はnakamiを2減らせという意味でした。
};

int main()
{
	Glass glass; //glassという名のコップを生成。（以下の解説を参照してください。）
				 //引数を取らないコンストラクタが呼び出され、中に10の水を入れられる。
	cout << "コップglassをつくりました。" << endl;
	cout << "glassから水を出します。" << endl;
	glass.dasu();
	cout << "終了" << endl;
}