//pointer_sample3.cpp
#include <iostream>
using namespace std;

int main()
{
	int x = 3, y = 4;
	int* p1;
	int* p2;
	p1 = &x;
	p2 = &y;
	cout << "x�̃A�h���X��" << p1 << endl;
	cout << "p1���w�������ϐ��i�܂�x�j�̒l��" << *p1 << endl;
	cout << "y�̃A�h���X��" << p2 << endl;
	cout << "p2���w�������ϐ��i�܂�y�j�̒l��" << *p2 << endl;
}