//sisanneko.cpp
#include <iostream>
#include <string>
using namespace std;

class Neko
{
	string name;    //���O
public:
	Neko(string);   //�R���X�g���N�^
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

class SisankaNeko : public Neko
{
	int sisan;  //���Y�A���~�P��
public:
	SisankaNeko(string, int);     //�R���X�g���N�^
								  //�N����߂��֐��B�N���͎��Y�̗��q�݂̂ŁA������2%�Ƃ���B
	int get_nensyu() const { return sisan * 2 / 100; }
};

SisankaNeko::SisankaNeko(string n, int s) : Neko(n), sisan(s) {}

int main()
{
	string n;
	int s;
	cout << "���Y�ƔL����������ɐ������܂��B���O�����߂ē��͂��Ă��������B" << endl;
	cin >> n;
	cout << "���Y�����߂ē��͂��Ă��������B�i�P�ʁF���~�j" << endl;
	cout << "�i�����͔��p�œ��͂��Ă��������B�j" << endl;
	cin >> s;
	SisankaNeko dora(n, s);  //���Y�ƔL�̐���
							 //�������[�v�B������ɂ̓��[�U��1�A2�ȊO�̐�������͂���΂悢�B
	while (1) {
		cout << "�ǂ����܂����H" << endl;
		cout << "1 �����@2 �N����\���@3 ��߂�" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {
			//Neko�̊֐�naku��SisankaNeko���g���B
			dora.naku();
			//Neko��naku()��SisankaNeko�ł��g����̂ł��B
		}
		else if (ans == 2) {
			cout << "�N���͌���" << dora.get_nensyu() << "���~�ł��B" << endl;
		}
		//��̂ǂ�����藧���Ȃ��ꍇ�B���[�U�ɂ́u3 ��߂�v�ƕ\���������A
		//1�A2�ȊO�Ȃ烋�[�v�𔲂���悤�ɂ����B
		else {
			break;
		}
		//���₷���̂��߂̉��s
		cout << endl;
	}

	cout << "�����܂�" << endl;
}