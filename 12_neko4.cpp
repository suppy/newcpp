//neko4.cpp
#include <iostream>
#include <string>  //string���g�����߂ɕK�v
using namespace std;

class Neko
{
	string name;  //���O
	int tairyoku; //�̗�
public:
	Neko(string n) : name(n), tairyoku(10) {}
	int syokuji();  //�H�����i���[�U����j���炤�֐�
	int naku();     //���֐�
};

int Neko::syokuji() {
	cout << name << "�ɐH���������܂��B�ǂꂾ���H�ׂ����܂����H" << endl;
	cout << "���p�̐����œ��͂��Ă��������B" << endl;
	int food;          //�H�ׂ�����ʁ@���[�U�Ɍ��߂Ă��炤
	cin >> food;
	tairyoku += food;
	return tairyoku;   //tairyoku�̒l��߂�
}

int Neko::naku()
{
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
	tairyoku -= 5;
	return tairyoku;   //tairyoku�̒l��߂�
}

int main()
{
	cout << "�L����������ɐ������܂��B���O�����߂Ă��������B" << endl;
	string temp;
	cin >> temp;
	Neko kai_neko(temp);  //�����L�̐����@���̓��[�U��temp�ɓ��͂�������
	cout << endl;
	for (int i = 0; i < 5; i++) {  //�T�񂾂���������̔L�ƗV�ԃv���O�����ł�
		cout << "�ǂ����܂��H" << endl;
		cout << "1 �H����^����@2 ����" << endl;
		cout << "���p�̐����œ��͂��Ă��������B" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			int t;
			t = kai_neko.syokuji();  //�܂��ANeko::syokuji�̓��e�����s����A���̌��ʂ̗̑͂�
									 //Neko::syokuji�̖߂�l�Ƃ��ė^�����At�ɑ�������B
			cout << "�L�̗̑́�" << t << endl;
		}
		else if (ans == 2) {
			int t;  //���t�Ƃ͕ʂ́o�@�p�u���b�N���ɂ���̂őS�����֌W
			t = kai_neko.naku();  //�܂��ANeko::naku�̓��e�����s����A���̌��ʂ̗̑͂�
								  //Neko::naku�̖߂�l�Ƃ��ė^�����At�ɑ�������B
			cout << "�L�̗̑́�" << t << endl;
			if (t < 0) {
				cout << "�H�����s�\���������̂ŁA�L�ׂ͗̂��������̉Ƃɍs���Ă��܂��܂����B" << endl;
				break;  //for������ʂ���Ƃ������߁@�̗͂����ɂȂ����炨���܂��Ƃ������Ƃł�
			}    //if(t<0)�̂���������
		}        //if(ans==2)�̂���������
		cout << endl; //���₷���̂��߂̉��s
	}            //for(i=0;i<5;i++)�̂���������
	cout << "�����" << endl;
}