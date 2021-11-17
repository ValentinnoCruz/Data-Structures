#include "Stack_char.h"
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
void stack :: push(char value)
{
	insertAtBack(value);			//calls function to insert from back of stack
}
//POP FUNCTION
char stack :: pop()
{
	removeFromBack();			//calls function to remove from back of stack
}
//TOP FUNCTION
char& stack:: top()
{
	Node* old = first;			//make old node equal to first
		
	while(old -> next !=last)		//will iterate until it reaches the previous in the list right before last
	{
		old = old->next;
	}
	
	old->val;
}
