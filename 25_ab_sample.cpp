//ab_sample.cpp
//���͖�肪����܂��B
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
	void input();
	void show() const;
};

//�|�C���^��0�́u�ǂ����w���Ȃ��v�Ƃ����Ӗ��B��q�B
Betu::Betu() : a(0) {}

Betu::~Betu() {
	delete a;
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