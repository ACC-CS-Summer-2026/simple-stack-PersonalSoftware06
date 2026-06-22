/*
* Jada Lee
* Assignment 4: Simple Stack
* 6/21/26
* Purpose: Testing for Stack ADT.
* All tests are performed directly in main.
*/

#include "main.h"
#include <iostream>

using std::cout;
using std::endl;

int main() {

    Stack s;
    int out;

    cout << "TEST" << endl;
    
    cout << "Is empty? " << s.isEmpty() << endl;
  
    cout << "Push 5: " << s.push(5) << endl;
    cout << "Push 10 " << s.push(10) << endl;
 
    cout << "Peek: " << s.peek(&out) << " value=" << out << endl;
    
    cout << "Pop: " << s.pop(&out) << " value=" << out << endl;
    cout << "Pop: " << s.pop(&out) << " value=" << out << endl;

    cout << "Pop on empty: " << s.pop(&out) << endl;

    cout << endl << "RANDOM TEST" << endl;

    // tests here
    
    return 0;
}
