//omikuji3.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Omikuji
{
	int un;  //���b�L�[�i���o�[
public:
	Omikuji();   //�R���X�g���N�^
	void hiku();
};

//�R���X�g���N�^�A���b�L�[�i���o�[�����[�U�ɑ�����Ă��炢�܂�
Omikuji::Omikuji()
{
	srand((unsigned)time(NULL));
	cout << "�����̃��b�L�[�i���o�[�i1�`5�j����͂��Ă��������B" << endl;
	cin >> un;  //�����̃��b�L�[�i���o�[����
}

//���݂���������
void Omikuji::hiku()
{
	int x;
	x = rand() % 5 + 1;   //1�`5�̗����𔭐������A���ɑ���A���ꂪ���������݂����̔ԍ�
	cout << "���Ȃ��̉^����";
	if (x == un) {                                            //x��un����������Α�g
		cout << "��g�Ƃ������Ƃł��B" << endl;
	}
	else {                                                    //x��un���������Ȃ���΁u���ʁv
		cout << "���݂Ƃ������Ƃł��B" << endl;
	}
}

int main()
{
	Omikuji ok;  //���݂���
	cout << "1�T�ԕ��̐肢�ł��B" << endl;
	for (int i = 0; i < 7; i++) {
		cout << "��������" << i << "����F" << endl;
		ok.hiku();
	}
}