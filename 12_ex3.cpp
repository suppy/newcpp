//ex3.cpp
#include <iostream>
using namespace std;

//関数func()を定義します。
int func()
{
	cout << "こんにちは。私はコンピュータです。" << endl;
	return 1;   //整数値１を戻す
}

int main()
{
	int d;      //整数変数dの宣言（「整数dを使うよ」という意味）    
	d = func(); //考え込むと不思議な文ですが、次のような意味になります。
				//まず、func()の中身が実行される。
				//そして、この関数から戻された値１がdに代入される。
	cout << "func()から戻された値＝" << d << endl;  //dの値を出力
}