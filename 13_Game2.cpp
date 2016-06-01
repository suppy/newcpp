//Game2.cpp
#include <iostream>
#include <cstdlib>  //�����̂��߂ɕK�v
#include <ctime>    //�����̂��߂ɕK�v
using namespace std;

//�q�[���[�܂�p�Y�ł���
class Hero
{
	int power;                       //�q�[���[�̃p���[
public:
	Hero() : power(100) {}            //�q�[���[�̃R���X�g���N�^�A�q�[���[�̃p���[���͂���100�Ƃ���
	int getPower() { return power; }  //�upower��߂��v�֐�
	void kougeki_suru(int n);        //�u�q�[���[���U������v�֐�
	void kougeki_sareru(int n);      //�u�q�[���[���U�������v�֐�
};

//�u�q�[���[���U������v�֐��̒�`�An�͍U���Ɏg���p���[
void Hero::kougeki_suru(int n)
{
	cout << "���}�߁B���`�̍U�����󂯂Ă݂�B" << endl;
	cout << "�ǂ��`��I�I�I" << endl;
	power -= n;  //�U�������̂Ńp���[�����炵�܂��B
				 //�������{���Ƀp���[���ǂ����ɂ�����̂ł͂Ȃ��A�P�ɐ��l�����炷�����ł����B

				 //�����p���[���܂�0�ȏ�Ȃ�悵�A�����A���ɂȂ�����A�g�������ŕ����Ƃ����B
				 //�ȉ���if��else�͂��������Ӗ��ł��B
	if (power >= 0) {
		cout << "�i���݂̃p���[��" << power << "�ɂȂ����B�j" << endl;
	}
	else {
		cout << "���܂����I�p���[���g���������B" << endl;
		cout << "���������܂����I�I�I�������B" << endl;
	}
}

//�u�q�[���[���U�������v�֐��̒�`�An�͍U������Č��炳���p���[�̗�
void Hero::kougeki_sareru(int n)
{
	cout << "�������B���}�̍U���������邱�Ƃ�����̂��B" << endl;
	power -= n;  //�U������ăp���[������B
				 //�ȉ��̎d�g�݂�kougeki_suru()�Ƃقړ����B
	if (power >= 0) {
		cout << "�i���݂̃p���[��" << power << "�ɂȂ����B�j" << endl;
	}
	else {
		cout << "���ꂽ�B�������B" << endl;
	}
}

//�喂���B���̓q�[���[�ƂقƂ�Ǔ����\���ł�
class Daimao
{
	int power;                       //�喂���̃p���[
public:
	Daimao() : power(100) {}          //�喂���̃R���X�g���N�^�A�喂���̂͂��߂̃p���[��100�Ƃ���
	int getPower() { return power; }  //�upower��߂��v�֐�
	void kougeki_suru(int n);        //�u�喂�����U������v�֐�
	void kougeki_sareru(int n);      //�u�喂�����U�������v�֐�
};

//�u�喂�����U������v�֐��̒�`�An�͍U���Ɏg���p���[
void Daimao::kougeki_suru(int n)
{
	cout << "�喂���l�̈ꌂ�������Ă݂�B" << endl;
	cout << "�ǂ��`��B" << endl;
	power -= n;  //�U�������̂Ńp���[�����炵�܂��B
				 //�������{���Ƀp���[���ǂ����ɂ�����̂ł͂Ȃ��A�P�ɐ��l�����炷�����ł����B

				 //�����p���[���܂��O�ȏ�Ȃ�悵�A�����A���ɂȂ�����A�g�������ŕ����Ƃ����B
				 //�������A�喂���̃p���[�͔閧�Ȃ̂ŏ����Ȃ��B
	if (power < 0) {
		cout << "���܂����I�I�I�p���[���g���������B" << endl;
		cout << "�ށA�ށA�ށB���O���B�������B" << endl;
	}
}

//�u�喂�����U�������v�֐��̒�`�Bn�͍U������Č��炳���p���[�̗�
void Daimao::kougeki_sareru(int n)
{
	cout << "�������B���`�̖����̍U���������邱�Ƃ�����̂��B" << endl;
	power -= n;  //�U������ăp���[������B
				 //�ȉ��̎d�g�݂�kougeki_suru()�Ƃقړ����B�喂���̃p���[�͔閧�Ȃ̂ŏ����Ȃ��B
	if (power < 0) {
		cout << "���ꂽ�B�������B" << endl;
	}
}

//�Ό��ꏊ�̃N���X�i�q�[���[��喂�����u���́v�Ȃ�A�Ό��ꏊ���u���́v�ł��ˁB�j
class Taiketu_basyo
{
	Daimao bu;         //�Ό��ꏊ�ɂ���喂��bu�I
	Hero you;          //�Ό��ꏊ�ɂ���q�[���[you�I
	int bu_no_basho;   //�喂���̂���ꏊ�i1�`5�̐��l�j�A����͌�Ō��܂�
	int you_no_basho;  //�q�[���[�̂���ꏊ�i1�`5�̐��l�j�A����͌�Ń��[�U�����߂�
public:
	Taiketu_basyo();            //�Ό��ꏊ�̃R���X�g���N�^�A��`�̓N���X�錾�̊O��
	void taiketu();             //�u�q�[���[�Ƒ喂����1��Ό�����v�֐�
	void kurikaesi_taiketu();   //�u�J��Ԃ��Ό�����v�֐�
};

//�Ό��ꏊ�̃R���X�g���N�^�̒�`
Taiketu_basyo::Taiketu_basyo()
{
	srand((unsigned)time(NULL)); //�����̏�����
	bu_no_basho = rand() % 5 + 1;    //rand()% 5��0�`4�̒��̂ł���߂Ȑ��i�����j
									 //����������rand() % 5 + 1��1�`5�̂����̂ǂꂩ�i����ɐ������܂��j�A����ő喂���̏ꏊ�����܂���
	cout << "���Ȃ��Ƒ喂���u�[�Ƃ̌���ł��B\n" << endl;
	cout << "�喂���u�[�͍��W1�`5�̂ǂ����ɐ���ł��܂��B" << endl;
	cout << "���Ȃ����ǂ����ɐg����߂Ă��������B" << endl;
	cout << "�g����߂���W�i1�`5�̐��l�j����͂��Ă��������B" << endl;
	cin >> you_no_basho;             //�q�[���[�̏ꏊ�����
}

void Taiketu_basyo::taiketu()   //�u�q�[���[�Ƒ喂�����Ό�����v�֐��̒�`
{
	int iti, kougeki;           //�ꎞ�I�ɕK�v�ȁu�ʒu�v�Ɓu�U���ʁv�̕ϐ��i������́j
	cout << "�����A���Ȃ��̍U���ł��B" << endl;
	cout << "�U���̈ʒu�i1�`5�̐��l�j����͂��Ă��������B>> ";
	cin >> iti;                //�U������ʒu��iti�ɑ��
	cout << "�U���Ɏg���p���[�i" << you.getPower() << "�ȉ��̐��l�j����͂��Ă��������B>> ";
	cin >> kougeki;            //�U���Ɏg���p���[��kougeki�ɑ��
	cout << endl;
	you.kougeki_suru(kougeki); //�q�[���[you�̍U��
							   //�U���ʂ�kougeki�ɑ�����ꂽ�l�A���̒l�����q�[���[�̃p���[�͌���
							   //taiketu()�̉��������ꏊ
	if (you.getPower() < 0) { //�U���̂������ŁA�q�[���[�̃p���[�����ɂȂ�΁A�A�A
		return;             //return�͂��̊֐��̎��s���I��������
	}
	if (bu_no_basho == iti) {    //����bu_no_basho��iti����v������i�܂�A�˂�����Ƃ���ɑ喂����������j
		bu.kougeki_sareru(kougeki * 2);  //�U�����󂯂܂��B���̂Ƃ��喂����
										 //�q�[���[���g�����p���[��2�{�����Ղ��܂��B
										 //kougeki * 2�Ƃ�kougeki��2�{�Ƃ����Ӗ��ł��B
										 //taiketu()�̉��������ꏊ
		if (bu.getPower() < 0) {  //�U������āA�喂���̃p���[�����ɂȂ�΁A�A�A
			return;             //return�͂��̊֐��̎��s���I��������
		}
	}
	else {
		cout << "���Ȃ��̍U���͂͂��ꂽ�悤�ł��B" << endl;  //�͂��ꂽ��A�����N����Ȃ�
	}
	cout << endl;
	cout << "�喂���̍U���ł��B" << endl;
	cout << "�i�G���^�[�L�[�������Ă��������B�j" << endl;
	cin.sync();       //cin���t���b�V��
	cin.get();        //1���X�g�b�v
	iti = rand() % 5 + 1;       //�喂���̍U���̈ʒu�͗����i�����ł�1�`5�܂ł̂����̂ǂꂩ�j�Ō��܂�
	kougeki = rand() % 100 + 1; //�喂���̍U���̗ʂ������i1�`100�܂ł̂����̂ǂꂩ�j�Ō��܂�
	bu.kougeki_suru(kougeki);   //�喂��bu�̍U���i�喂���̃p���[������j
								//taiketu()�̉��������ꏊ
	if (bu.getPower() < 0) {  //�U���̂������ő喂���̃p���[�����ɂȂ�΁A�A�A
		return;             //return�͂��̊֐��̎��s���I��������
	}
	if (you_no_basho == iti) {              //����������
		you.kougeki_sareru(kougeki * 2);  //�U�������
	}
	else {                                 //�͂��ꂽ��
		cout << "�喂���u�[�̍U���͂͂��ꂽ�悤�ł��B" << endl;
	}
}

void Taiketu_basyo::kurikaesi_taiketu()
{
	while (1) {
		taiketu();
		if (you.getPower() < 0) {
			cout << "\n�喂���̑O�ɐ��`�̃q�[���[�͔s��܂����B" << endl;
			break;
		}
		if (bu.getPower() < 0) {
			cout << "\n���`�̃q�[���[�̑O�ɑ喂���͔s��܂����B" << endl;
			break;
		}
	}
}

int main()
{
	Taiketu_basyo dokoka;  //�Ό��ꏊDokoka�̐���
						   //�����ŃR���X�g���N�^�������A�q�[���[�Ƒ喂���̈ʒu�����߂���B

	dokoka.kurikaesi_taiketu();      //dokoka�̑Ό�
}