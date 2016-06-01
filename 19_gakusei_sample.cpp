//gakusei_sample.cpp
#include <iostream>
using namespace std;

class Gakusei
{
	int sansu;  //�Z���̓_
public:
	//�����Ȃ��̃R���X�g���N�^�i���ꂪ�Ȃ��ƃv���O�����̓G���[�j
	Gakusei() {}  //�������Ȃ��̂ŁA���J�b�R���͋�
				  //��������̃R���X�g���N�^
	Gakusei(int x) { set_sansu(x); }
	void set_sansu(int x);
	int get_sansu() const { return sansu; }
	void input();    //���͂̂��߂ɐV�����t����
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

Gakusei mine[10];

int main()
{
	int sum = 0;
	cout << "�P�O�l�̊w���̓_������͂��Ă��������B" << endl;
	for (int i = 0; i < 10; i++) {
		mine[i].input();
	}
	cout << "����ł͕��ς��v�Z���܂��B" << endl;
	for (int i = 0; i < 10; i++) {
		sum += mine[i].get_sansu();
	}
	cout << "���ϓ_��" << sum / 10 << "�ł��B" << endl;
}