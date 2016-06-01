//dest_sample2.cpp
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
	//datum�̒l��߂��֐������Ă���
	int get_datum() const { return datum; }
	//�f�X�g���N�^
	~Nanika() {
		cout << "Nanika�̃C���X�^���X" << datum << "�����ł��܂����B" << endl;
	}
};

//Nanika�̔h���N���X
class NanikaNoKo : public Nanika
{
public:
	//�R���X�g���N�^
	NanikaNoKo(int x) : Nanika(x) {
		cout << "NanikaNoKo�̃C���X�^���X" << get_datum() << "����������܂����B" << endl;
	}
	//�f�X�g���N�^
	~NanikaNoKo() {
		cout << "NanikaNoKo�̃C���X�^���X" << get_datum() << "�����ł��܂����B" << endl;
	}
	void func() const {
		cout << "NanikaNoKo�̃C���X�^���X" << get_datum() << "func���Ă΂�܂����B" << endl;
	}
};

//NanikaNoKo�̔h���N���X
class NanikaNoMago : public NanikaNoKo
{
public:
	//�R���X�g���N�^
	NanikaNoMago(int x) :NanikaNoKo(x) {
		cout << "NanikaNoMago�̃C���X�^���X" << get_datum() << "����������܂����B" << endl;
	}
	~NanikaNoMago() {
		cout << "NanikaNoMago�̃C���X�^���X" << get_datum() << "�����ł��܂����B" << endl;
	}
	void func() const {
		cout << "NanikaNoMago�̃C���X�^���X" << get_datum() << "func���Ă΂�܂����B" << endl;
	}
};

int main()
{
	Nanika One(1), Two(2);
	NanikaNoKo Three(3);
	NanikaNoMago Four(4);

	One.func();
	Two.func();
	Three.func();
	Four.func();
}