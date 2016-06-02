//ab_sample2.cpp
#include <iostream>
#include <string>
using namespace std;

class Aru {
	int data;
public:
	Aru(int d) : data(d) {}
	int get_data() const { return data; }
};

class Betu
{
	Aru *a;  //Aru�̃|�C���^
public:
	Betu();
	~Betu();
	//�R�s�[�R���X�g���N�^
	Betu(const Betu&); //�錾�Ȃ̂ŉ������͏ȗ�����
	//������Z�q
	Betu& operator=(const Betu&); //�錾�Ȃ̂ŉ������͏ȗ�����
	void input();
	void show() const;
	int get_data() const { return a->get_data(); } //�V������`
};

//�|�C���^��0�́u�ǂ����w���Ȃ��v�Ƃ����Ӗ��B��q�B
Betu::Betu() : a(0) {}

Betu::~Betu() {
	delete a;
}

//�R�s�[�R���X�g���N�^
Betu::Betu(const Betu& x) {
	a = new Aru(x.get_data());
}

//������Z�q
Betu& Betu::operator=(const Betu& x) {
	if (this == &x)
		return *this; //���ȑ��
	delete a;
	a = new Aru(x.get_data());
	return *this;
}

void Betu::input() {
	int d;
	delete a;
	cout << "��������͂��Ă��������F" << endl;
	cin >> d;
	a = new Aru(d);
}

void Betu::show() const {
	if (a == 0) return;  //�|�C���^���ǂ����w�������Ă��Ȃ���ΏI��
	cout << "�f�[�^�F" << a->get_data() << endl;
}

int main()
{
	Betu one;
	one.input();
	one.show();
}