//ransu3.cpp
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	cout << rand() % 10 + 1 << endl;
	cout << rand() % 10 + 1 << endl;
	cout << rand() % 10 + 1 << endl;
}