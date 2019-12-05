#pragma once
#include "Node.h"
#include <iostream>
#include <cstdlib>

#define MAX 10

template <class T>
class MyStack {

public:
	MyStack(int maxSize = MAX);
	~MyStack() { delete[] stackArr; };

	void Push(T value);
	T Pop();
	T Peek();
	void Print();

	T *stackArr;
	int stackTop;
	int stackCap;

	int stackSize();
	bool isEmpty();
	bool isAtMax();

};

