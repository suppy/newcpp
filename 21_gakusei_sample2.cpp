//gakusei_sample2.cpp
#include <iostream>
using namespace std;

class Gakusei
{
	int sansu; //�Z���̓_
public:
	//�����Ȃ��̃R���X�g���N�^�i���ꂪ�Ȃ��ƃv���O�����̓G���[�j
	Gakusei() {} //�������Ȃ��̂ŁA���J�b�R���͋�
	//��������̃R���X�g���N�^
	Gakusei(int x) { set_sansu(x); }
	void set_sansu(int x);
	int get_sansu() const { return sansu; }
	void input(); //���͂̂��߂ɐV�����t����
};

void Gakusei::set_sansu(int x) {
	if (x >= 100) {
		//x��100�ȏ�̎��́A100�������Ă��܂��B
		x = 100;
	}
	sansu = x;
}

void Gakusei::input()
{
	int temp;
	cout << "�Z���̓_����͂��Ă��������F";
	cin >> temp;
	set_sansu(temp);
}

int main()
{
	int ninzu, sum = 0;
	Gakusei *pm;
	cout << "�w���̐l������͂��Ă��������B" << endl;
	cin >> ninzu;
	pm = new Gakusei[ninzu]; //���������Ȃ��R���X�g���N�^���g����
	cout << ninzu << "�l�̊w���̓_������͂��Ă��������B" << endl;
	for (int i = 0; i < ninzu; i++) {
		pm[i].input();
	}
	cout << "����ł͕��ς��v�Z���܂��B" << endl;
	for (int i = 0; i < ninzu; i++) {
		sum += pm[i].get_sansu();
	}
	cout << "���ϓ_��" << sum / ninzu << "�ł��B" << endl;
	delete[] pm;
}