#ifndef _QUEUE_H
#define _QUEUE_H
#include <iostream>
#include <string>
#include "LinkedList_char.h"

class queue : public LinkedList
{
	public:
	  queue(); // Constructor
        ~queue(); // Destructor
	void enqueue(char value); //inserts value at front
	char dequeue(); //removes value from front
	char& front(); //returns front value
	
};

#endif
