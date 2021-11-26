#include "LinkedList_char.h"
#include <iostream>
#include <stddef.h>

using namespace std;




//CONSTRUCTOR
LinkedList :: LinkedList()	
{
	first = NULL;		//initializes first
	last = NULL;		//initializes first
}

//DESTRUCTOR
LinkedList :: ~ LinkedList ()	
{
	while(!isEmpty())	//DELETES SINGLY LINKED LIST
	{
		removeFromBack();
	}
}

//INSERT BACK
void LinkedList :: insertAtBack(char valueToInsert)	
{
	Node * v = new Node;				//creates a new node
	v -> val = valueToInsert;			//gives new node a value
	
	if (first == NULL)				//if true then make first and last point to first created node
	{           
		v->next =NULL;                                                                                                                                         
		first = v;
		last = v;
		
	}
	else
	{
		v->next =NULL;				//will store NULL
		last->next = v;				//makes last equal to NULL
		last = v;				//make last the new node inserted
		
	}
}

//INSERT FRONT
void LinkedList :: insertAtFront(char valueToInsert)	
{
	Node * n =new Node;				//creates a new node
	n->val = valueToInsert;				//gives a new node a value 

	if(first == NULL)				//if true then make first and last point to first created node		
	{
		n->next =NULL;
		first = n;
		last = n;
	}

	n ->next = first;				//will make next of n store first
	first = n;					//new first is n
	

		

}
//REMOVE FROM BACK
bool LinkedList :: removeFromBack()			
{	
	if(first==NULL)					//empty
	{
		return false;		
	}

	if(first==last)					//delete first or last since they are pointing to the same node
	{		
        	delete first;	
        	first = NULL;
        	last = NULL;
        	return true;				//not empty
        }
	else
	{
		
		Node* old = first;			//make old node equal to first
		
		while(old -> next !=last)		//will iterate until it reaches the previous in the list right before last
		{
			old = old->next;
		}	                    
   		delete last;	                    	//delete last
    		last = old; 	 			//last is now equal to old
		return true;				//not empty
	}
}

//REMOVE FROM FRONT
bool LinkedList :: removeFromFront()		
{
	if(first ==NULL)
	{
		return false;			//empty
	}

	if(first==last)				//delete first or last since they are pointing to the same node
	{
		delete first;
		first =NULL;
		last =NULL;
		return true;			//not empty
	}
	else
	{
		Node * old = first;		//old pints to first
		old = old->next;		//old skips first and points to it
		delete first;			//delete first
		first= old;			//make first equal to old
		return true;			//not empty
	}

}


//SIZE
int LinkedList :: size()				
{
	int count = 0;					//will count number of nodes
	Node* n = first;
	if(first == last)
	{
		return 1;
	}
	while(n  != last)				//if it reaches last then break
	{
		++count;
		n= n->next;
		if(n==last)
		{
			++count;
		}
	}
	return count;				
}

//IS EMPTY
bool LinkedList :: isEmpty()				
{
	if(first == NULL)				//if empty return true
	{
		return true;
	}
	else
	{
		return false;				//if not return false
	}
}

//CLEAR	
void LinkedList :: clear()					
{	
	
	while(!isEmpty())				//delete list by calling remove from back function until list is empty
	{
		removeFromBack();	
		 
	}
	
}

//PRINT
void LinkedList :: print()				
{
	if(first != NULL)				//if list is not empty
	{
		Node* n = first;
		
		while(n!=last)				//goes through list values until it reaches last node
		{
			cout<<n->val<<",";
			n= n->next;
		}
	
		if(n != NULL)				//helps print out last value in list
		{
			cout<<n->val;
		}	
	}
}
