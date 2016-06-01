//pointer_sample2.cpp
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
	cout << "yのアドレスは" << p2 << endl;
}