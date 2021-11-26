#include "Queue.h"
#include <stddef.h>
#include <iostream>

using namespace std;

//CONSTRUCTOR
queue :: queue()		
{

}
//DESTRUCTOR
queue :: ~queue()
{

}

//INSERTS VALUE AT FRONT
void queue :: enqueue(int value)
{

	insertAtFront(value);

}

//INSERTS VALUE AT FRONT
int queue :: dequeue()
{
	int hold = first->val;		//hold first valuie	
	removeFromFront();		//remove first value
	return hold;			//return the value held

}

//RETURNS BACK VALUE FROM QUEUE
int& queue :: front()
{
	return first-> val;
}
