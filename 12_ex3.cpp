//ex3.cpp
#include <iostream>
using namespace std;

//�֐�func()���`���܂��B
int func()
{
	cout << "����ɂ��́B���̓R���s���[�^�ł��B" << endl;
	return 1;   //�����l�P��߂�
}

int main()
{
	int d;      //�����ϐ�d�̐錾�i�u����d���g����v�Ƃ����Ӗ��j    
	d = func(); //�l�����ނƕs�v�c�ȕ��ł����A���̂悤�ȈӖ��ɂȂ�܂��B
				//�܂��Afunc()�̒��g�����s�����B
				//�����āA���̊֐�����߂��ꂽ�l�P��d�ɑ�������B
	cout << "func()����߂��ꂽ�l��" << d << endl;  //d�̒l���o��
}