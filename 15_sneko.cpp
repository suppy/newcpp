//sneko.cpp
#include <iostream>
#include <string>
using namespace std;

//���c�u�L�v
class Neko
{
	string name;
public:
	Neko(string s);   //�uNeko(string);�v�ł���
	void naku() const;
};

Neko::Neko(string s) : name(s) {}

void Neko::naku() const {
	cout << "�ɂႠ�B���l��" << name << "���B" << endl;
}

//�u�L�v�̔h���N���X�u�T�����[�L�v
class SalaryNeko : public Neko
{
	int gekkyu;   //����
public:
	//�R���X�g���N�^�B�{���Ő������܂��B
	SalaryNeko(string s, int x) : Neko(s), gekkyu(x) {}
	//�N����߂��֐��B�N���͌�����12�{�Ƃ���B
	int get_nensyu() const { return gekkyu * 12; }
	//������1���~���₷�֐�
	void syoukyu() { gekkyu++; }
};

int main()
{
	cout << "�T�����[�L����������ɐ������܂��B���O�����߂ē��͂��Ă��������B" << endl;
	string temp;
	cin >> temp;
	cout << "���C�������߂ē��͂��Ă��������B" << endl;
	cout << "�i1���~�P�ʂŁA���p��������͂��Ă��������B�j" << endl;
	int syoninkyu;
	cin >> syoninkyu;
	SalaryNeko dora(temp, syoninkyu);  //�T�����[�L�̐���
									   //���[�v�B������ɂ̓��[�U��4��1�A2�A3�ȊO�̐�������͂���΂悢�B
	while (1) {
		cout << "�ǂ����܂����H" << endl;
		cout << "1�D�����@2�D�N����\���@3�D�����@4�D��߂�" << endl;
		int ans;
		cin >> ans;
		if (ans == 1) {     //�����Aans���P�Ȃ�A�A�A
							//Neko�̊֐�Naku��SalaryNeko���g���B
			dora.naku();
			//Neko��naku()��SalaryNeko�ł��g����̂ł��B
		}
		else if (ans == 2) { //��������Ȃ��āAans���Q�Ȃ�A�A�A
							 //SalaryNeko�̊֐�get_nensyu��SalaryNeko���g���B
			cout << "�N���͌���" << dora.get_nensyu() << "�ł��B" << endl;
		}
		else if (ans == 3) {   //��������Ȃ��āAans���R�Ȃ�A�A�A
							   // SalaryNeko�̊֐�syoukyu��SalaryNeko���g���B
			dora.syoukyu();
			cout << "�P���~�������܂����B" << endl;
		}
		else {    //��̂ǂ�����藧���Ȃ��ꍇ
				  //���[�U�ɂ�4�Ɠ��͂���΁u��߂�v�ɂȂ�ƕ\�����Ă��邪�A
				  //�ق��̐������܂߂ď��1�A2�A3�ȊO�Ȃ烋�[�v�𔲂���悤�ɂ����B
				  //���[�v���甲����ɂ�break;
			break;
		}
		//���₷���̂��߂̉��s
		cout << endl;
	}
	cout << "�����܂�" << endl;
}