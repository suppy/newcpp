//jimbutu_game.cpp
#include <iostream>
#include <cstdlib>  //�����ɕK�v�A����P�O���Q��
#include <ctime>   //�����ɕK�v
using namespace std;

//�l���A���m��肢�t�Ȃǂ̊��N���X
class Jimbutu
{
	int power;
public:
	//�R���X�g���N�^�Apower��������
	Jimbutu() : power(5) {}
	int get_power() const { return power; }
	//�d����������Ƀp���[�����炷�֐�
	void decr_power() {
		power--;
		cout << "���݂̃p���[�F" << power << endl;
	}
};

//���m
class Kensi : public Jimbutu
{
public:
	void sigoto();  //���m�̎d���A��`�̓N���X�錾�̊O�ŁA�A�A
};

void Kensi::sigoto()
{
	//get_power()�Ńp���[�𒲂ׁA�O�ȉ��Ȃ牽�����Ȃ��B
	if (get_power() <= 0) {
		cout << "���܂�B���Ă���񂾁B" << endl;
		return;  //���̊֐��usigoto�v���甲����B
	}
	cout << "���͌��m���B���̌��Z�������Ă��B" << endl;
	cout << "�ǂ��`�B�����`�B�����`�B�A�A�A�ȏ�B" << endl;
	decr_power();  //Jimbutu�̊֐�
}

//�肢�t
class Uranaisi : public Jimbutu
{
public:
	void sigoto();  //�肢�t�̎d���A��`�̓N���X�錾�̊O�ŁA�A�A
};

void Uranaisi::sigoto()
{
	//get_power()�Ńp���[�𒲂ׁA�O�ȉ��Ȃ牽�����Ȃ��B
	if (get_power() <= 0) {
		cout << "�킵��`�肢�t���Ⴊ�A�������ē������B" << endl;
		return;  //���̊֐��usigoto�v���甲����
	}
	cout << "���͐肢�t����B�����̂��܂��̉^�������Ă�낤���́B" << endl;
	int x = rand() % 3;
	//��̂P�s�́uint x;
	//�@�@�@�@�@�@x=rand()%3; �v �Ɠ����Ӗ��ł�

	if (x == 0) {
		cout << "���܂��̍����̉^���͍ō�����B" << endl;
	}
	else if (x == 1) {
		cout << "�����̂��܂��́A�܂��A���ʂ���ȁB" << endl;
	}
	else if (x == 2) {
		cout << "�����͂��܂��̖������B������������悢�B" << endl;
	}
	decr_power();  //Jimbutu�̊֐�
}

int main()
{
	srand((unsigned)time(NULL));
	Kensi hero;    //���m�w���̒a��
	Uranaisi pero; //�肢�t�y���̒a��

	while (1) {
		int x;
		cout << "�ǂ����܂��H" << endl;
		cout << "1 ���m�Ɏd�������Ă��炤�B 2 �肢�t�Ɏd�������Ă��炤�B 3 ��߂�" << endl;
		cin >> x;
		if (x == 1) {
			hero.sigoto();
		}
		else if (x == 2) {
			pero.sigoto();
		}
		else {
			break;
		}
	}
	cout << "�����܂��B" << endl;
}