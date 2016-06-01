//hito_sample4.cpp
#include <iostream>
using namespace std;

class Hito
{
	int power;
public:
	Hito(int x) : power(x) {}
	virtual ~Hito() {};    //���z�f�X�g���N�^
	void set_power(int x) { power = x; }
	int get_power() const { return power; }
	virtual void Jikosyoukai();  //���z�֐��ɂȂ�
};

//Hito�̔h���N���XSamurai
class Samurai : public Hito
{
public:
	//Hito�̃R���X�g���N�^��x��n���ȊO�͉������Ȃ��R���X�g���N�^
	Samurai(int x) : Hito(x) {}
	//Hito�Ɠ����̃����o�֐��i��������z�֐��ɂȂ�j
	void Jikosyoukai();  //���N���X�œ����̊֐���virtual��t�����̂ŁA������virtual�͂���Ȃ�
};

//Hito�̔h���N���XNinja
class Ninja : public Hito
{
public:
	//Hito�̃R���X�g���N�^��x��n���ȊO�͉������Ȃ��R���X�g���N�^
	Ninja(int x) : Hito(x) {}
	void Jikosyoukai();
};

//Hito�̔h���N���XMatimusume
class Matimusume : public Hito
{
public:
	//Hito�̃R���X�g���N�^��x��n���ȊO�͉������Ȃ��R���X�g���N�^
	Matimusume(int x) : Hito(x) {}
	void Jikosyoukai();
};

void Hito::Jikosyoukai()
{
	power--;  //���ȏЉ�ɗ͂��g����power��1���炷���Ƃɂ���
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

void Ninja::Jikosyoukai()
{
	set_power(get_power() - 1);
	cout << "�َ҂͔E�҂ł�����B" << endl;
	cout << "�َ҂̃p���[��" << get_power() << "�ł�����B" << endl;
}

void Matimusume::Jikosyoukai()
{
	set_power(get_power() - 1);
	cout << "�������͍]�˂�����B" << endl;
	cout << "�������̃p���[��" << get_power() << "��B" << endl;
}

int main()
{
	Hito One(10);        //�l
	Samurai Two(12);  //���ނ炢
	Ninja Three(14);     //�E��
	Matimusume Four(16);  //����
	Hito *p;       //Hito�̃C���X�^���X�ւ̃|�C���^�B�܂��A�����������Ă��Ȃ��B

	p = &One;
	p->Jikosyoukai();
	p = &Two;
	p->Jikosyoukai();
	p = &Three;
	p->Jikosyoukai();
	p = &Four;
	p->Jikosyoukai();
}