//dest_sample.cpp
#include <iostream>
using namespace std;

class Nanika
{
	int datum;
public:
	//�R���X�g���N�^
	Nanika(int x) : datum(x) {
		cout << "Nanika�̃C���X�^���X" << datum << "����������܂����B" << endl;
	}
	void func() const {
		cout << "Nanika�̃C���X�^���X" << datum << "��func���Ă΂�܂����B" << endl;
	}
	//�f�X�g���N�^
	~Nanika() {
		cout << "Nanika�̃C���X�^���X" << datum << "�����ł��܂����B" << endl;
	}
};

int main()
{
	//�v���O���}���͂��߂��琔�l1�A2��^���ăC���X�^���XOne�ATwo������
	Nanika One(1), Two(2);

	One.func();
	Two.func();
}