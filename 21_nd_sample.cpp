#include <iostream>
using namespace std;

//�p��̋��ȏ��ɂ悭����Thing���Ȃ߂�Nanika�Ƃ����̂ł����A�Ȃ񂩕s�C���ł��ˁB
class Nanika
{
	int datum;
public:
	//���������Ȃ��R���X�g���N�^
	Nanika() : datum(0) {
		cout << "Nanika�̃C���X�^���X" << datum << "����������܂����B" << endl;
	}
	//���������R���X�g���N�^
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
	//Nanika�̃|�C���^���܂��p�ӁB����̓|�C���^�ł����ăI�u�W�F�N�g�͂܂��Ȃ��B
	Nanika *p;
	cout << "Nanika�̃I�u�W�F�N�g�𐶐�" << endl;
	p = new Nanika(1);
	//��ł�Nanika�̃R���X�g���N�^�Ɂu1�v���n����A�I�u�W�F�N�g�����������B
	//�����Ɂu1�v��I�񂾂̂ɈӖ��͂Ȃ��B
	//p�̓|�C���^�Ȃ̂ŁA�����o�֐����Ăяo���̂ɁA�u.�v�ł͂Ȃ��u->�v���g���B
	p->func();

	//�|�C���^p�Ŏ�����Ă���C���X�^���X�����ł�����B
	delete p;
}