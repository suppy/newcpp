//omikuji2.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int un;  //���b�L�[�i���o�[
	cout << "�����̃��b�L�[�i���o�[�i1�`5�j����͂��Ă��������B" << endl;
	cin >> un;  //�����̃��b�L�[�i���o�[����
	srand((unsigned)time(NULL));
	int x;
	x = rand() % 5 + 1;  //���������݂����̔ԍ�
	cout << "���Ȃ��̉^����";
	if (x == un) {                                            //x��un����������Α�g
		cout << "��g�Ƃ������Ƃł��B" << endl;
	}
	else {                                                    //x��un���������Ȃ���΁u���ʁv
		cout << "���݂Ƃ������Ƃł��B" << endl;
	}
}