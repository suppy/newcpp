//hito_sample.cpp
#include <iostream>
using namespace std;

//�l��\���N���X
class Hito
{
	int power;
public:
	Hito(int x) : power(x) {}
	void set_power(int x) { power = x; }
	int get_power() const { return power; }
	void Jikosyoukai(); //���ȏЉ�֐�
};

void Hito::Jikosyoukai()
{
	power--; //���ȏЉ�ɗ͂��g����power��1���炷���Ƃɂ���
	cout << "���͐l���B" << endl;
	cout << "���̃p���[��" << power << "���B" << endl;
}

int main()
{
	Hito *p; //Hito�I�u�W�F�N�g�ւ̃|�C���^�B�܂��A�����������Ă��Ȃ��B
	p = new Hito(10); //�p���[��10��Hito�I�u�W�F�N�g����������A���̃A�h���X��p�ɑ�������B
	p->Jikosyoukai(); //p�̎w�������I�u�W�F�N�g�ɂ���Jkosyoukai()���ĂԁB
	delete p; //p�̎w�������I�u�W�F�N�g��j���B
}