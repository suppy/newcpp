//neko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
private:
	string name;
public:
	Neko(string s) {
		name = s;
	}
	void naku() {
		cout << "�ɂႠ�B���l��" << name << "���B" << endl;
	}
};

int main()
{
	Neko dora("�{�X");  //�u�{�X�v�Ƃ����̖��O��������dora�����������
	cout << "���Ȃ��̖��Â����L����������ɐ�������܂����B" << endl;
	cout << "�L�����܂��B" << endl;

	dora.naku();
}