#pragma once
struct elem
{
	int val;
	elem* next = nullptr;
};

void push(elem*& stack, int value);
bool pop(elem*& stack, int& value);
//int* peek(elem* stack);
//void clear(elem*& stack);
