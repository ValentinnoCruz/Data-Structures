#include "Stack.h"
#include <stddef.h>
using namespace std;
#include <iostream>

using namespace std;
//CONSTRUCTOR
stack :: stack()				
{

}
//DESTRUCTOR
stack :: ~stack()
{

}
//PUSH FUNCTION
void stack :: push(int value)
{
	insertAtBack(value);			//calls function to insert from back of stack
}
//POP FUNCTION
int stack :: pop()
{
	removeFromBack();			//calls function to remove from back of stack
}
//TOP FUNCTION
int& stack:: top()
{
	Node* old = first;			//make old node equal to first
		
	while(old -> next !=last)		//will iterate until it reaches the previous in the list right before last
	{
		old = old->next;
	}
	
	old->val;
}
