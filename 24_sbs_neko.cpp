//sbs_neko.cpp
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
	//�������z�֐�
	virtual int get_nensyu() const = 0;
};

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

//�u�T�����[�L�v�̔h���N���X�u�T�����[�L�E�E�C�Y�E�{�[�i�X�v�B�����p��ނ��Ⴍ����B
class SalaryNekoWithBonus :public SalaryNeko
{
	int bonus;  //�����̉�����������\��
public:
	//�R���X�g���N�^
	//��1���������O�A��2�����������A��3�������{�[�i�X��\��
	SalaryNekoWithBonus(string, int, int);
	//�N���i�����{�{�[�i�X�j��߂��֐�
	int get_nensyu() const { return get_gekkyu() * (12 + bonus); }
};

//�u�L�v�̔h���N���X�u���Y�ƔL�v
class SisankaNeko : public Neko
{
	int sisan;  //���Y�A���~�P��
public:
	SisankaNeko(string, int);     //�R���X�g���N�^
								  //�N����߂��֐��B�N���͎��Y�̗��q�݂̂ŁA������2%�Ƃ���B
	int get_nensyu() const { return sisan * 2 / 100; }
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

SalaryNeko::SalaryNeko(string s, int x) : Neko(s), gekkyu(x) {}  //�R���X�g���N�^

SalaryNekoWithBonus::SalaryNekoWithBonus(string s, int g, int b) : SalaryNeko(s, g), bonus(b) {}

SisankaNeko::SisankaNeko(string n, int s) : Neko(n), sisan(s) {}

int main()
{
	int syurui;     //Neko�̎�ނ��ꎞ�i�[����ꏊ
	string name;  //���O�̈ꎞ�i�[�ꏊ
	int gekkyu;    //�����̈ꎞ�i�[�ꏊ�A�ȒP�̂��ߍ���͏����͂����܂���B
	int bonus;     //�{�[�i�X�������̉������������ꎞ�I�Ɋi�[�B
	int sisan;      //���Y�̈ꎞ�i�[�ꏊ

	Neko *cat[5];   //5�L�i���ɂ�Ɠǂށj����Neko�|�C���^

					//�f�[�^�̓���
	cout << "5�L�̃f�[�^����͂��܂��B" << endl;
	for (int i = 0; i < 5; i++) {
		cout << "�E�Ƃ����߂Ă��������B" << endl;
		cout << "1 �T�����[�L�i�{�[�i�X�Ȃ��j�@2 �{�[�i�X����̃T�����[�L�@3 ���Y�ƔL" << endl;
		cout << "�i���p���͂ł����I�j" << endl;
		cin >> syurui;
		cout << "���O����͂��Ă��������F";
		cin >> name;
		switch (syurui) {
		case 1:
			cout << "�����i���~�P�ʂŐ����j����͂��Ă��������B" << endl;
			cin >> gekkyu;
			cat[i] = new SalaryNeko(name, gekkyu);
			break;
		case 2:
			cout << "�����i���~�P�ʂŐ����j����͂��Ă��������B" << endl;
			cin >> gekkyu;
			cout << "�{�[�i�X�͌����̉������������͂��Ă��������B�i�����Łj" << endl;
			cin >> bonus;
			cat[i] = new SalaryNekoWithBonus(name, gekkyu, bonus);
			break;
		case 3:
			cout << "���Y�i���~�P�ʂŐ����j����͂��Ă��������B" << endl;
			cin >> sisan;
			cat[i] = new SisankaNeko(name, sisan);
			break;
		}
	}

	cout << "����ł͊e�����ȏЉ�܂��B��낵���ł����H" << endl;
	cout << "1 �͂��@2 ������" << endl;
	cin >> syurui;
	//���[�U��1�ȊO�̐�������͂�����I��
	if (syurui != 1) return 0; //main�̒��ł́ureturn 0;�v��main���I��������

	for (int i = 0; i < 5; i++) {
		cat[i]->naku();
		cout << "�N���F" << cat[i]->get_nensyu() << "���~" << endl;
	}

	//��n��
	for (int i = 0; i < 5; i++)
		delete cat[i];

	cout << "�����܂�" << endl;
}