//RocketSample.cpp
#include <iostream>
using namespace std;

class Rocket         //���ǔŃ��P�b�g
{
	int nenryo;      //�R��
	int sokudo;      //���݂̑��x
public:
	Rocket(int x);   //�R���X�g���N�^
	void kasoku();   //������\���֐�
};

//�R���X�g���N�^�̒�`
Rocket::Rocket(int x) : nenryo(x), sokudo(0) {}

//������\���֐��̒�`
void Rocket::kasoku()
{
	if (nenryo >= 2) {
		sokudo += 2;
		nenryo -= 2;
		cout << "���݂̔R����" << nenryo << "�ł��B" << endl;
		cout << "���݂̑��x��" << sokudo << "�ł��B" << endl;
	}
	else {
		cout << "�R���؂�ł��B�����ł��܂���B�Y���ł��B" << endl;
	}
}

int main()
{
	cout << "���P�b�g����������ɂ���܂��B�R���i�����j����͂��Ă��������B" << endl;
	int n;       //���[�U�̓��͂����l���i�[����ϐ����ЂƂp�ӂ��܂����B���̖���n�ł��B
	cin >> n;    //���[�U�̓��͂���������n�ɑ�����܂����B

				 //n���R���X�g���N�^�ɓn���ă��P�b�g������܂��B
	Rocket ohtori(n); //�����n�̒l���R���X�g���N�^�̒�`��x�ɃR�s�[����A
					  //�R���X�g���N�^�̒��g�����s����Anenryo�̒l��n�̒l��
					  //�Ȃ������P�b�gohtori�i�P���j�����������킯�ł��B
					  //����ohtori���I�u�W�F�N�g�ȂǂƂ�Ԃ̂ł����B
	cout << "�������܂��B" << endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	cout << "�܂��A�������܂��B" << endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	cout << "�܂��܂��A�������Ă݂܂��B" << endl;
	ohtori.kasoku();  //ohtori�ɑ΂���kasoku���g���Ă��܂�
	cout << "�P���̖`���͏I���܂����B" << endl;
}