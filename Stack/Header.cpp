#pragma once
//Guy Goudeau
//Oct 5, 2015
#include <iostream>
#include "Header.h"
using namespace std;

void Stack::push(Node &n)
{
	if (top != NULL)
	{
		n.next = top;
		top = &n;
	}
	else
	{
		top = &n;
	}
}

void Stack::peek(Node)
{
}

void Stack::pop(Node)
{
}
