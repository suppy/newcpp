//sbneko.cpp
#include <iostream>
#include <string>
using namespace std;

//���c�u�L�v
class Neko
{
	string name; //���O
public:
	Neko(string); //�R���X�g���N�^
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

//�u�L�v�̔h���N���X�u�T�����[�L�v
class SalaryNeko : public Neko
{
	int gekkyu; //����
public:
	SalaryNeko(string, int); //�R���X�g���N�^
							 //�N����߂��֐��B�N���͌�����12�{�Ƃ���B
	int get_nensyu() const { return gekkyu * 12; }
	//������1���~���₷�֐�
	void syoukyu() { gekkyu++; }
	//�V�����t��������u�����̒l��߂��֐��v
	int get_gekkyu() const { return gekkyu; }
};

SalaryNeko::SalaryNeko(string s, int x) : Neko(s), gekkyu(x) {}  //�R���X�g���N�^

																 //�u�T�����[�L�v�̔h���N���X�u�T�����[�L�E�E�C�Y�E�{�[�i�X�v�B�����p��ނ��Ⴍ����B
class SalaryNekoWithBonus :public SalaryNeko
{
	int bonus;  //�����̉�����������\��
public:
	//�R���X�g���N�^
	//��1���������O�A��2�����������A��3�������{�[�i�X��\��
	SalaryNekoWithBonus(string, int, int);
	//�N���i�����{�{�[�i�X�j��߂��֐�
	//SaralyNeko�Ɠ������O�̊֐��A�������O�ł��悢�̂ł��B
	int get_nensyu() const { return get_gekkyu() * (12 + bonus); }
};

SalaryNekoWithBonus::SalaryNekoWithBonus(string s, int g, int b) : SalaryNeko(s, g), bonus(b) {}

//�O���main()�Ƃقړ��������A�Ȃ��钆�J�b�R���Ȃ��Ă݂��B
int main()
{
	string name;  //���O�̈ꎞ�i�[�ꏊ
	int gekkyu;    //����
	int bonus;     //�{�[�i�X�������̉���������

	cout << "�T�����[�L�E�E�C�Y�E�{�[�i�X����������ɐ������܂��B\n���O�����߂ē��͂��Ă��������B" << endl;
	cin >> name;
	cout << "���������߂ē��͂��Ă��������B�i�P���~�P�ʁj" << endl;
	cout << "�i�����͔��p�œ��͂��Ă��������B�j" << endl;
	cin >> gekkyu;
	cout << "�{�[�i�X�͌����̉����������A���͂��Ă��������B" << endl;
	cin >> bonus;
	SalaryNekoWithBonus dora(name, gekkyu, bonus);  //�T�����[�L�E�E�C�Y�E�{�[�i�X�̐���
													//���[�v�B������ɂ̓��[�U��1�A2�A3�ȊO�̐�������͂���΂悢�悤�ɂ���B
	while (1) {
		int ans;
		cout << "�ǂ����܂����H" << endl;
		cout << "1 �����@2 �N����\���@3 �����@4 ��߂�" << endl;
		cin >> ans;
		if (ans == 1)
			dora.naku();
		else if (ans == 2)
			cout << "�N���͌���" << dora.get_nensyu() << "�ł��B" << endl;
		else if (ans == 3) {
			dora.syoukyu();
			cout << "�P���~�������܂����B" << endl;
		}
		else
			break;
		//���₷���̂��߂̉��s
		cout << endl;
	}
	cout << "�����܂�" << endl;
}