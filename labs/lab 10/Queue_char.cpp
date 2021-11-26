#include "Queue_char.h"
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
void queue :: enqueue(char value)
{

	insertAtBack(value);

}

//INSERTS VALUE AT FRONT
char queue :: dequeue()
{
	char hold = first->val;		//hold first valuie	
	removeFromFront();		//remove first value
	return hold;			//return the value held

}

//RETURNS BACK VALUE FROM QUEUE
char& queue :: front()
{
	return first-> val;
}
