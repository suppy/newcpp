//inu.cpp
#include <iostream>
#include <string>
using namespace std;

class Inu
{
	string name;
public:
	Inu(string);   //�uInu(string s);�v��s���ȗ�����
	void naku() const;
};

Inu::Inu(string s) : name(s) {}

void Inu::naku() const {
	cout << "���B�l��" << name << "���B" << endl;
}

int main()
{
	string s;
	cout << "���𐶐����܂��B���O����͂��Ă��������B" << endl;
	cin >> s;

	Inu dog(s);
	cout << "���Ȃ��̖��Â���������������ɐ�������܂����B" << endl;
	cout << "�������܂��B" << endl;

	dog.naku();
}