#ifndef _STACK_H
#define _STACK_H
#include <iostream>
#include <string>
#include "LinkedList.h"



class stack : public LinkedList
{
	public:
	  stack(); // Constructor
        ~stack(); // Destructor
	void push(int value);// push function
	int pop(); //pop function
	int& top();// top function
	
};

#endif
