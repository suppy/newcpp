//Glass.cpp
#include <iostream>
using namespace std;

class Glass
{
	int nakami;                    //���̗�
public:
	Glass() : nakami(10) {}         //���������Ȃ��R���X�g���N�^
	void dasu() { nakami -= 2; }    //�����o���֐�
									//�unakami -= 2;�v��nakami��2���点�Ƃ����Ӗ��ł����B
};

int main()
{
	Glass glass; //glass�Ƃ������̃R�b�v�𐶐��B�i�ȉ��̉�����Q�Ƃ��Ă��������B�j
				 //���������Ȃ��R���X�g���N�^���Ăяo����A����10�̐���������B
	cout << "�R�b�vglass������܂����B" << endl;
	cout << "glass���琅���o���܂��B" << endl;
	glass.dasu();
	cout << "�I��" << endl;
}