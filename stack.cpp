/**************************
* Jada Lee
* Assignment 4: Simple Stack
* 6/21/26
* Purpose: Implementation file for the Stack ADT.
* Provides push, pop, peek, and isEmpty
* operations using a static array
**************************/

#include "stack.h"


/*
* Stack
* Purpose: constructor initializes top to -1 (empty stack)
* Parameters: none.
* Returns: Nothing.
*/
Stack::Stack() {
    top = -1;
}


/*
* ~Stack
* Purpose: Inserts a value at the top of the stack.
* parameters: int value - the value to push
* Returns: bool - true if successful, false if overflow.
*/
bool Stack::push(int value) {
    if (top >= STACK_SIZE - 1) {
	return false;
    }
    top++;
    data[top] = valuse;
    return true;
}


/*
* pop
* Purpose: Removes and returns the top value.
* Parameters: int* out - pointer to store popped value.
* Returns: bool - true if successful, false if underflow
*/
bool Stack::pop(int* out) {
    if (top < 0) {
	return false;
    }
    *out = data[top];
    top--;
    return true;
}

/*
* peek
* Purpose: Returns the top value without removing it.
* Parameters: int* out - pointer to store value.
* Returns: bool - true if successful, false if underflow.
*/
bool Stack::peek(int* out) {
    if (top < 0) {
	return false;
    }
    *out = data[top];
    return true;
}

/*
* isEmpty
* Purpose: Checks if the stack is empty.
* Parameters: None.
* Returns: bool - true if empty, false otherwise.
*/
bool Stack::isEmpty() {
    return top < 0;
}
