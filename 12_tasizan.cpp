//tasizan.cpp
#include <iostream>
using namespace std;

//足し算をする関数
int add()
{
	int a, b;  //二つの整数をいれる変数
	cout << "これから二つの整数の足し算をします。" << endl;
	cout << "まず、ひとつめの整数を入力してください。" << endl;
	cin >> a;
	cout << "もうひとつの整数を入力してください。" << endl;
	cin >> b;
	//次のreturnで合計を戻す
	return a + b;
}

int main()
{
	int d = add(); //整数変数dが宣言され、すぐにadd()が実行され、その戻す値がdに代入される。
	cout << "合計：" << d << endl;
}