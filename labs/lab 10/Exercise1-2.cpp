#include <iostream>
#include "LinkedList.h"
#include "Queue.h"

using namespace std;

int main()
{
	cout<<"SUMMARY OF QUEUE"<<endl;
	queue po;

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};		//10 values that will be added to queue 
	
	for(int i=0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++)
	{
		po.enqueue(arr[i]);				//adding values to stack queue
	}
	
	if(!po.isEmpty())					//check if stack is empty
	{
		cout<<"Queue is NOT empty "<<endl;
	}

	else
	{
		cout<<"Queue IS empty "<<endl;
	}

	cout<<"The Queue looks like the following: "; po.print(); cout<<endl;		
	
	//EXCEPTION REMOVING FRONT
	cout<<"Removing front of Queue...";
	try						//try this instance
	{
		if(po.isEmpty())			//if true, throw exception				
		{
			throw 1;
		}
		else
		{
			cout<<" ( VALUE  "<<po.dequeue()<< ")"<<endl;	//else, successfully deleted
		}

	}

	catch(...)					//catches exception and prints description of error
	{
		cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
	}

	cout<<"The Queue looks like the following: "; po.print(); cout<<endl;

	//EXCEPTION CALLING FRONT
	cout<<"Getting front value from second Queue..." ;
	try						//try this instance
	{
		if(po.isEmpty())			//if true, throw exception				
		{
			throw 1;
		}
		else
		{
			cout<<po.front()<<endl;		//front exists
				
		}

	}

	catch(...)					//catches exception and prints description of error
	{
		cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
	}
	
	cout<<"Inserting a new value to Queue..."<<endl;
	po.enqueue(87);

	cout<<"The Queue looks like the following: "; po.print(); cout<<endl;

	//create a second queue
	cout<<"Creating a second Queue..."<<endl;
	queue pi;

	int arr2[7] = {23,456,233,12,89,12,8};		//10 values that will be added to queue 
	
	for(int i=0 ; i < sizeof(arr2) / sizeof(arr2[0]) ; i++)
	{
		pi.enqueue(arr2[i]);				//adding values to stack queue
	}

	cout<<"The second Queue looks like the following: "; pi.print(); cout<<endl;

	cout<<"Clearing first Queue..."<<endl;			//clear first Queue
	po.clear();


	//EXCEPTION REMOVING FRONT
	cout<<"Removing front of Queue...";
	try						//try this instance
	{
		if(po.isEmpty())			//if true, throw exception				
		{
			throw 1;
		}
		else
		{
			cout<<" ( VALUE  "<<po.dequeue()<< ")"<<endl;	//else, successfully deleted
		}

	}

	catch(...)					//catches exception and prints description of error
	{
		cout<<"Call to dequeue() generated an exception, because the queue is empty"<<endl;
	}
	


	if(!po.isEmpty())					//check if stack is empty
	{
		cout<<"Queue is NOT empty "<<endl;
	}

	else
	{
		cout<<"Queue IS empty "<<endl;
	}

	cout<<"Clearing second Queue..."<<endl;
	pi.clear();

	if(!pi.isEmpty())					//check if stack is empty
	{
		cout<<"Second Queue is NOT empty "<<endl;
	}

	else
	{
		cout<<"Second Queue IS empty "<<endl;
	}



	//EXCEPTION CALLING FRONT
	cout<<"Getting front value from second Queue..." ;
	try						//try this instance
	{
		if(po.isEmpty())			//if true, throw exception				
		{
			throw 1;
		}
		else
		{
			cout<<po.front()<<endl;		//front exists
				
		}

	}

	catch(...)					//catches exception and prints description of error
	{
		cout<<"Call to front() generated an exception, because the queue is empty"<<endl;
	}
	
}
