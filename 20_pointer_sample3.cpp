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
	cout << "xのアドレスは" << p1 << endl;
	cout << "p1が指し示す変数（つまりx）の値は" << *p1 << endl;
	cout << "yのアドレスは" << p2 << endl;
	cout << "p2が指し示す変数（つまりy）の値は" << *p2 << endl;
}