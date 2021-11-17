#ifndef _STACK_CHAR_H
#define _STACK_CHAR_H
#include <iostream>
#include <string>
#include "LinkedList_char.h"



class stack : public LinkedList
{
	public:
	  stack(); // Constructor
        ~stack(); // Destructor
	void push(char value); //push function
	char pop();	//pop function
	char& top();	//top function
	
};

#endif
