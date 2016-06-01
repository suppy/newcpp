//hito_sample3.cpp
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
	virtual void Jikosyoukai(); //���z�֐��ɂȂ�
};

//Hito�̔h���N���XSamurai
class Samurai : public Hito
{
public:
	//Hito�̃R���X�g���N�^��x��n���ȊO�͉������Ȃ��R���X�g���N�^
	Samurai(int x) : Hito(x) {}
	//Hito�Ɠ����̃����o�֐�
	void Jikosyoukai(); //���N���X��virtual�錾���Ă���̂ŁA��������z�֐��ɂȂ�
};

void Hito::Jikosyoukai()
{
	power--; //���ȏЉ�ɗ͂��g����power��1���炷���Ƃɂ���
	cout << "���͐l���B" << endl;
	cout << "���̃p���[��" << power << "���B" << endl;
}

void Samurai::Jikosyoukai()
{
	set_power(get_power() - 1);
	//���power�̒l��get_power�Ŏ��o���A���ꂩ��1���炵���l��power�ɃZ�b�g���Ă���
	//�܂�A�����power��1���炵�����ƂɂȂ�
	cout << "���͂��ނ炢���B" << endl;
	cout << "���̃p���[��" << get_power() << "���B" << endl;
}

int main()
{
	Hito *p1, *p2; //Hito�I�u�W�F�N�g�ւ̃|�C���^�B�܂��A�����������Ă��Ȃ��B
	p1 = new Hito(10); //�p���[��10��Hito�I�u�W�F�N�g����������A���̃A�h���X��p1�ɑ�������B
	p1->Jikosyoukai(); //p1�̎w�������I�u�W�F�N�g�ɂ���Jkosyoukai()���ĂԁB
	p2 = new Samurai(12); //�p���[��12��Samurai�I�u�W�F�N�g����������A���̃A�h���X��p2�ɑ�������B
	p2->Jikosyoukai(); //p2�̎w�������I�u�W�F�N�g�ɂ���Jkosyoukai()���ĂԁB
	delete p1; //p1�̎w�������I�u�W�F�N�g��j���B
	delete p2; //p2�̎w�������I�u�W�F�N�g��j���B���͖�肠��B
}