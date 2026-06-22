## READ ME ##

## included files ##
- stack.h: Stack class declaration
- stack.cpp: Stack class implementation
- main.h: Header for main
- main.cpp: Developer testing
- README.md: This file
- essay.md: AI usage statement and essay


## How to Compile ##
Open the terminal inside your repo folder and run:

'''bash
g++ -I ./ *.cpp

## How to run ##
after compiling successfully run:

./a.out

## How to test the Stack ##
All testing is done manually inside main.cpp

Explicit Tests:
- Push on empty stack
- Pop on empty stack (underflow)
- Push until full (overflow)
- Peek on empty and non-empty stack

Random Tests:
- Hundreds or thousands of random operations
- Random pushes, pops, and peeks
- Testing behavior at boundaries (0 and STACK_SIZE -1)
