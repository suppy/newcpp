//Glass4.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                 //���̗�
public:
	//�R���X�g���N�^��2����
	Glass() : nakami(10) {}      //���������Ȃ��R���X�g���N�^
	Glass(int x) : nakami(x) {}  //���������R���X�g���N�^
	void dasu(int);             //�����o���֐�
};

void Glass::dasu(int x) {
	if (nakami - x >= 0) {
		nakami -= x;
		cout << "�����o���܂����B" << endl;
		cout << "���݂̃R�b�v�̒��g��" << nakami << "�ł��B" << endl;
	}
	else {
		cout << "����Ȃɐ�������܂���B" << endl;
		cout << "���݃R�b�v�̒��ɂ�" << nakami << "�����Ă��邾���ł��B" << endl;
	}
}

int main()
{
	int x;
	cout << "����10�̃R�b�v�iglass�j�𐶐����܂��B" << endl;
	Glass glass;        //���������Ȃ��R���X�g���N�^���Ăяo�����
						//����10����������glass�Ƃ������̃R�b�v����������
	cout << "�����Aglass���琅���o���܂��B������o���܂����B���͂��Ă��������B" << endl;
	cin >> x;           //���x���g���܂킵�Ă���
	glass.dasu(x);

	cout << "����20�̃R�b�v�iglass2�j�𐶐����܂��B" << endl;
	Glass glass2(20);    //���������R���X�g���N�^���Ăяo�����
						 //����20����������glass2�Ƃ������̃R�b�v�����������
	cout << "�����Aglass2���琅���o���܂��B������o���܂����B���͂��Ă��������B" << endl;
	cin >> x;            //���x���g���܂킵�Ă���
	glass2.dasu(x);
	cout << "�I��" << endl;
}