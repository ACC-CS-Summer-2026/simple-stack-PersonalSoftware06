/*********************************
* Jada Lee
* Assignment 4: Simple Stack
* 6/21/26
* Purpose: Class declaration for the Stack ADT.
* Implements a simple integer stack using a static
* array and top index.
**********************************/

#ifndef STACK_H
#define STACK_H

#define STACK_SIZE 10

class Stack {
public:

	/*****************
	* Constructors/Destructor
	*****************/
	Stack();
	~Stack();

	/****************
	* Public Methods
	****************/
	bool push(int);
	bool pop(int*);
	bool peek(int*);
	bool isEmpty();

private:

	/****************
	* Attributes
	****************/
	int data[STACK_SIZE];
	int top;

};

#endif // STACK_H
