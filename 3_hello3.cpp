//hello3.cpp
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;      //���O�i������j�́u������́v
	int tosi;         //�N��i�����j�́u������́v

	cout << "����ɂ��́B���̓R���s���[�^�ł��B" << endl;
	cout << "���Ȃ��̖��O����͂��Ă��������B" << endl;
	cin >> name;      //���O�i������j�̓���

	cout << name << "����B��낵���B" << endl;

	cout << "�Ƃ���ŁA" << name << "����B����ł������N�͂����ł����H" << endl;
	cout << "(���͂͂��Ȃ炸�A���p�̐����ł��肢���܂��B)" << endl;
	cin >> tosi;      //�N��i�����j�̓���

	cout << "�Ȃ�قǁB" << tosi << "�΂ł����B" << endl;
	cout << "���͂�������2�΂̃}�V���ł��B" << endl;
}