//Guy Goudeau
//gg1126
//Oct 5, 2015
#include <iostream> //include iostream library
#include "Header.h" //include header

//1) it does not need to be templated
//2) it only needs to be able to push elements "add" them to the stack
//3)pop elements "remove" them from the stack
//4)peek the top of the stack "look at the the last element pushed onto it"
//5)check if its empty
//6)keep track of the size

int main()
{
	Node node1(1); //initialize node1
	Node node2(2); //initialize node2
	Node node3(3); //initialize node3
	Node node4(4); //initialize node4

	Stack stack; //create stack of class Stack
	stack.push(node1); //push node1 to top of stack
	stack.push(node2); //push node2 to top of stack
	stack.push(node3); //push node3 to top of stack
	stack.pop(stack); //pop top node off of stack
	stack.peek(stack); //look at top node on stack
	stack.size(stack); //show size of stack
	stack.empty(stack); //tell if stack is empty or not

	system("pause"); //pause system
	return 0; //end program
}