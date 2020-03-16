#include <iostream>
#include <Windows.h>

#include "stek.h"
using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	elem* stack = nullptr;
	for (int i = 1; i<=10; i++)
	{
		push(stack, i);
	}
	int val;
	while (pop(stack, val))
	{
		cout << val << " ";
	}
	cout << endl;
	system("pause");
}