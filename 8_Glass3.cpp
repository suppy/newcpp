//Glass3.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                    //���̗�
public:
	Glass(int x) : nakami(x) {}     //���������R���X�g���N�^
									//���[�U���v���O���}�ɓn�����l�ix�ŕ\�����j��nakami�Ɋi�[
	void dasu(int);                //�����o���֐� 
};

void Glass::dasu(int x) {
	if (nakami >= x) {
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
	int x;  //�����́u������́vx�̒�`�B����cin�̑O�Ȃ�ǂ��ɂ����Ă��悢�̂ł��B
	cout << "�R�b�v�𐶐����܂��B�ǂꂾ����������邩���͂��Ă��������B" << endl;
	cin >> x;
	Glass glass(x);  //���������R���X�g���N�^���Ăяo����A
					 //����x����������glass�Ƃ������̃R�b�v�����������
	cout << "�����Aglass���琅���o���܂��B������o���܂����B���͂��Ă��������B" << endl;
	cin >> x;        //���x���g���܂킵�Ă���
	glass.dasu(x);
	cout << "�I��" << endl;
}