//quiz.cpp
#include <iostream>
using namespace std;

int main()
{
	int i;
	while (1) {
		cout << "���{�ꍂ���R�͂ǂ�ł����B" << endl;
		cout << "��������͂��Ă��������B" << endl;
		cout << "1.�q�}�����@2.�x�m�R�@3.���b�L�[" << endl;
		cin >> i;
		if (i == 2) {
			break;
		}
		cout << "�͂���ł��B" << endl;  //�s�����̏ꍇbreak����Ȃ��̂�
								   //���̕������s�����B
	}
	//���[�v�I���㎟�̕������s�����B
	cout << "�����Ȃ̂ŏI�����܂����B" << endl;
}