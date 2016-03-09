#pragma //matt told me to put this
//Guy Goudeau
//gg1126
//Oct 5, 2015
#include <iostream> //include iostream library
#include "Header.h" //include header

int counter; //initialize global variable counter;

void Stack::push(Node &n) //start defining push function for Stack class
{
	if (top != NULL) //if top is not null
	{
		n.next = top; //last node becomes old top
		top = &n; //new top is equal to current pushed node
	}
	else //otherwise
	{
		top = &n; //become new top since nothing was there
	}
	counter++; //add 1 to counter
	std::cout << "Node " << n.data << " has been pushed" << std::endl; //tell which node was pushed
}

void Stack::peek(Stack) //start definining peek function for Stack class
{
	std::cout << "Node " << top->data << " is on top" << std::endl; //dereference top to get data
}

void Stack::pop(Stack) //start defining pop function for Stack class
{
	if (top == NULL) //if top is null
	{
		std::cout << "Nothing in stack to pop." << std::endl; //output that theres nothing in the stack
	}
	else //otherwise
	{
		std::cout << "Node " << top->data << " has been popped" << std::endl; //show that the top node has been removed
		top = top->next; //top now equals next node in line
		counter--; //remove 1 from counter
	}
}

void Stack::empty(Stack) //start defining empty function for Stack class
{
	if (top == NULL) //if top is null
	{
		std::cout << "Stack is empty." << std::endl; //output empty stack
	}
	else //otherwise
	{
		std::cout << "Stack is not empty." << std::endl; //output not empty stack
	}
}

void Stack::size(Stack) //start defining size function for Stack class
{
	std::cout << "Size of stack: " << counter << std::endl;//size of stack is equal to counter
}

Node::Node(int d) //Node constructor
{
	data = d; //int data is d
	next = NULL; //next is null
}