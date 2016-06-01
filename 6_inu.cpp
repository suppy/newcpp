//inu.cpp
#include <iostream>
#include <string>
using namespace std;

class Inu
{
	string name;
public:
	Inu(string);   //「Inu(string s);」のsを省略した
	void naku() const;
};

Inu::Inu(string s) : name(s) {}

void Inu::naku() const {
	cout << "わん。僕は" << name << "だ。" << endl;
}

int main()
{
	string s;
	cout << "犬を生成します。名前を入力してください。" << endl;
	cin >> s;

	Inu dog(s);
	cout << "あなたの名づけた犬がメモリ上に生成されました。" << endl;
	cout << "犬が鳴きます。" << endl;

	dog.naku();
}