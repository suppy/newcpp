//pointer_neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
	string name;
public:
	Neko(string);
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

int main()
{
	Neko dora("�{�X");
	//Neko�̃C���X�^���X���w�������|�C���^pcat
	Neko* pcat;

	pcat = &dora;
	dora.naku();
	pcat->naku();
}