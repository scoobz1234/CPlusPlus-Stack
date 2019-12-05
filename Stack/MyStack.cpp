#include "MyStack.h"

using namespace std;

/// CONSTRUCTOR ///
template <class T> MyStack<T>::MyStack(int size) 
{
	stackArr = new T[size]; // initialize the size of the array for storage
	stackCap = size; // used for making sure were not full..
	stackTop = -1; // first element of array is 0, so when we ++ it goes to 0..
}

/// PUSH ///
template <class T> void MyStack<T>::Push(T value)
{
	// check if were not full //
	if (!isAtMax()) {
		stackTop++; // increase the top int
		stackArr[stackTop] = value; //add the new value to the top of the array
		cout << "Sucessfully added " << value << " to the stack!" << endl;
	}
	else {
		cout << "Stack is full!" << endl; //were full so its a no go..
	}
}

/// POP ///
template <class T> T MyStack<T>::Pop()
{
	// check if the stack is not empty
	if (!isEmpty()) {
		cout << "Removal of " << Peek() << " was sucessful" << endl;
		return stackArr[stackTop--]; // return the popped value, and we take away one on the array

	}
	else {
		cout << "Array is empty, cannot remove anything!" << endl; //were empty so... nope.
		return NULL;
	}
}

/// PEEK ///
template <class T> T MyStack<T>::Peek()
{
	// check if the stack is not empty
	if (!isEmpty()) {
		cout << "Item at the top of the stack is: " << stackArr[stackTop] << endl;
		return stackArr[stackTop]; // return the top of the stack...
	}
	else {
		cout << "Stack is empty" << endl; // were empty
		return NULL;
	}
}

/// PRINT ///
template <class T> void MyStack<T>::Print() {
	for (int i = 0; i < stackSize(); i++) {
		cout << stackArr[i] << endl;
	}
}

/// HELPER FUNCTIONS ///

template <class T> int MyStack<T>::stackSize() {
	return stackTop + 1; // stack top will return one less because of array sizes, so we add 1
}

template <class T> bool MyStack<T>::isEmpty() {
	return stackTop == -1; // if our stack top = -1 then were empty.
}

template <class T> bool MyStack<T>::isAtMax() {
	return stackTop == stackCap - 1; // if our stack top value = our stack cap value-1 were full...
}
