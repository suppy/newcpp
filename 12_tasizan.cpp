//tasizan.cpp
#include <iostream>
using namespace std;

//�����Z������֐�
int add()
{
	int a, b;  //��̐����������ϐ�
	cout << "���ꂩ���̐����̑����Z�����܂��B" << endl;
	cout << "�܂��A�ЂƂ߂̐�������͂��Ă��������B" << endl;
	cin >> a;
	cout << "�����ЂƂ̐�������͂��Ă��������B" << endl;
	cin >> b;
	//����return�ō��v��߂�
	return a + b;
}

int main()
{
	int d = add(); //�����ϐ�d���錾����A������add()�����s����A���̖߂��l��d�ɑ�������B
	cout << "���v�F" << d << endl;
}