#ifndef _QUEUE_H
#define _QUEUE_H
#include <iostream>
#include <string>
#include "LinkedList.h"

class queue : public LinkedList
{
	public:
	  queue(); // Constructor
        ~queue(); // Destructor
	void enqueue(int value); //inserts value at front
	int dequeue(); //removes value from front
	int& front(); //returns front value
	
};

#endif
