//Glass2.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                    //���̗�
public:
	Glass() : nakami(10) {}         //���������Ȃ��R���X�g���N�^
	void dasu();                   //�����o���֐��i��`�͊O�ŏ����j
};

void Glass::dasu() {
	nakami -= 2;
	cout << "�����o���܂����B" << endl;
	cout << "���݂̃R�b�v�̒��g��" << nakami << "�ł��B" << endl;
}

int main()
{
	Glass glass; //glass�Ƃ������̃R�b�v�𐶐��B
				 //���������Ȃ��R���X�g���N�^���Ăяo����Anakami��10���������B
	cout << "�R�b�vglass������܂����B" << endl;
	cout << "glass���琅��3��o���܂��B" << endl;
	glass.dasu();
	glass.dasu();
	glass.dasu();
	cout << "�I��" << endl;
}