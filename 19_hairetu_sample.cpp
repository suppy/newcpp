//hairetu_sample.cpp
//10�l�̊w���̓_������͂��A���̕��ϒl���v�Z����v���O����
#include <iostream>
using namespace std;

int tensu[10];

int main()
{
	int sum = 0;  //sum�͍��v�_�A�������A�����ł͂��߂�0�ƒu���Ă����B�����Q�ƁB
	cout << "10�l�̊w���̓_�������Ԃɓ��͂��Ă��������B" << endl;
	for (int i = 0; i < 10; i++) {
		cin >> tensu[i];
	}
	cout << "����ł͕��ς��v�Z���܂��B" << endl;
	for (int i = 0; i < 10; i++) {
		sum += tensu[i];
	}
	cout << "���ϓ_��" << sum / 10 << "�ł��B" << endl;
	//��̂悤�ɏo�͂̕��Ɍv�Z���������Ă����܂��܂���B
}