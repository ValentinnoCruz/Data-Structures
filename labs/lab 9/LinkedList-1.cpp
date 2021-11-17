#include "LinkedList.h"

#include <stddef.h>
using namespace std;
#include <iostream>

using namespace std;

//CONSTRUCTOR
LinkedList :: LinkedList()	
{
    //initializes first
	first = NULL;		
	
	//initializes last
	last = NULL;		
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
void LinkedList :: insertAtBack(int valueToInsert)	
{
	Node * v = new Node;	   //create new mode
	v -> val = valueToInsert; //new mode given a value
	
	if (first == NULL)		//if true make 1sr and last point to 1st created node
	{           
		v->next =NULL;                                                                                                                                         
		first = v;
		last = v;
		
	}
	else
	{
		v->next =NULL;			  //stores NULL
		last->next = v;			 //last will equal NULL
		last = v;				//Last is now last node inserted
		
	}
}

//INSERT FRONT
void LinkedList :: insertAtFront(int valueToInsert)	
{
	Node * n =new Node;		  //create a new node
	n->val = valueToInsert;  //new node given a value

	if(first == NULL)	   //if true then make 1st and last point to 1st created node		
	{
		n->next =NULL;
		first = n;
		last = n;
	}

	n ->next = first;			 //will make next of n store first
	first = n;					//new first is n
	

		

}
//REMOVE FROM BACK
bool LinkedList :: removeFromBack()			
{	
	if(first==NULL)					//this is emty
	{
		return false;		
	}

	if(first==last)	 //delete 1st or last since they are pointing to the same node
	{		
        	delete first;	
        	first = NULL;
        	last = NULL;
        	return true;		//when not empty
        }
	else
	{
		
		Node* old = first;			//old node will now equal 1st
		
		while(old -> next !=last) //iterates until reaches previous in the list right before last
		{
			old = old->next;
		}	                    
   		delete last;	              //delete last
    		last = old; 	 		 //last = old
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
		return true;			//when not empty
	}
	else
	{
		Node * old = first;		//old pints to 1st
		old = old->next;	   //old skips 1st and points to it
		delete first;		  //delete 1st
		first= old;			 //make 1st = to old
		return true;		//when not empty
	}

}


//SIZE
int LinkedList :: size()				
{
	int count = 0;					 //count # of nodes
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
	
	while(!isEmpty())	//delete list by calling remove from back function until list is empty
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
		
		while(n!=last)				//goes through list values until last node
		{
			cout<<n->val<<",";
			n= n->next;
		}
	
		if(n != NULL)				//print out last value in list
		{
			cout<<n->val;
		}	
	}
}








