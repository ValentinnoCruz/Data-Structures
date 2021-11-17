

#include "LinkedList_char.h"
#include <stddef.h>
using namespace std;
#include <iostream>


using namespace std;


//CONSTRUCTOR
LinkedList :: LinkedList()	
{
	first = NULL;		//initializes 1st
	last = NULL;		//initializes last
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
	Node * v = new Node;				 //creates a new node
	v -> val = valueToInsert;			//gives new node a value
	
	if (first == NULL)				//if true then make 1st and last point to 1st created node
	{           
		v->next =NULL;                                                                                                                                         
		first = v;
		last = v;
		
	}
	else
	{
		v->next =NULL;			  //will store NULL
		last->next = v;			 //makes last equal to NULL
		last = v;				//make last the new node inserted
		
	}
}

//INSERT FRONT
void LinkedList :: insertAtFront(char valueToInsert)	
{
	Node * n =new Node;			        //creates a new node
	n->val = valueToInsert;			   //gives a new node a value 

	if(first == NULL)				//if true then make 1st and last point to 1st created node		
	{
		n->next =NULL;
		first = n;
		last = n;
	}

	n ->next = first;			 //will make next of n store 1st
	first = n;					//new 1st is n
	

		

}
//REMOVE FROM BACK
bool LinkedList :: removeFromBack()			
{	
	if(first==NULL)					//empty
	{
		return false;		
	}

	if(first==last)				//delete 1st or last since they are pointing to the same node
	{		
        	delete first;	
        	first = NULL;
        	last = NULL;
        	return true;				//when not empty
        }
	else
	{
		
		Node* old = first;			//make old node = to 1st
		
		while(old -> next !=last)	//will iterate until reaches previous in the list before last
		{
			old = old->next;
		}	                    
   		delete last;	              //delete last
    		last = old; 	 		 //last is now = to old
		return true;				//when not empty
	}
}

//REMOVE FROM FRONT
bool LinkedList :: removeFromFront()		
{
	if(first ==NULL)
	{
		return false;			//empty
	}

	if(first==last)				//delete 1st or last since they are pointing to the same node
	{
		delete first;
		first =NULL;
		last =NULL;
		return true;			//not empty
	}
	else
	{
		Node * old = first;		//old pints to 1st
		old = old->next;		//old skips 1st and points to it
		delete first;			//delete 1st
		first= old;			    //make 1st equal to old
		return true;			//not empty
	}

}


//SIZE
int LinkedList :: size()				
{
	int count = 0;					//will count number of nodes
	Node* n = first;
	while(n  != last)				//if it reaches last then break
	{
		count++;
		n= n->next;
		if(n==last)
		{
			count++;
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
