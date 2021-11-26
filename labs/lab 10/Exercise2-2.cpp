#include <iostream>
#include "LinkedList_char.h"
#include "Queue_char.h"

using namespace std;

int main()
{
	queue po;
	cout<<"Function Call\t\t"<<"Output\t\t"<<"Front   Queue  Rear"<<endl;
	
	//EXCEPTION HANDLING
	cout<<"dequeue()\t\t";
	try								//try this instance
	{
		if(po.isEmpty())					//if true, throw exception	
		{
			throw "Exception";
		}

		else							//else, successfully deleted
		{
			
			cout<<po.dequeue();
			cout<<"\t\t";
			po.print();					
			cout<<endl;
		}
	}

	catch(...)
	{
		cout<<"Exception"<<endl;
	}
	

	cout<<"enqueue(D)\t\t";						//Insert value to Queue
	po.enqueue('D');
	cout<<"\t\t";
	po.print();
	cout<<endl;

	cout<<"enqueue(A)\t\t";						//Insert value to Queue
	po.enqueue('A');
	cout<<"\t\t";
	po.print();
	cout<<endl;

	//EXCEPTION HANDLING
	cout<<"dequeue()\t\t";
	try								//try this instance
	{
		if(po.isEmpty())					//if true, throw exception	
		{
			throw "Exception";
		}

		else							//else, successfully deleted
		{
			
			cout<<po.dequeue();
			cout<<"\t\t";
			po.print();					
			cout<<endl;
		}
	}

	catch(...)
	{
		cout<<"Exception"<<endl;
	}

	cout<<"size()\t\t\t";						//print size
	cout<<po.size()<<"\t\t";
	po.print();
	cout<<endl;

	cout<<"enqueue(D)\t\t";						//Insert value to Queue
	po.enqueue('D');
	cout<<"\t\t";
	po.print();
	cout<<endl;

	cout<<"isEmpty()\t\t";
	if(!po.isEmpty())						//check if stack is empty
	{
		cout<<"False\t\t";
	}

	else
	{
		cout<<"True\t\t";
	}
	po.print();
	cout<<endl;

	//EXCEPTION HANDLING
	cout<<"front()\t\t\t";						//print front
	try								//try this instance
	{
		if(po.isEmpty())					//if true, throw exception	
		{
			throw "Exception";
		}

		else							//else, successfully RETURNED
		{
			
			cout<<po.front();
			cout<<"\t\t";
			po.print();					
			cout<<endl;
		}
	}

	catch(...)
	{
		cout<<"Exception"<<endl;
	}

	cout<<"enqueue(T)\t\t";						//remove value from Queue
	po.enqueue('T');
	cout<<"\t\t";
	po.print();
	cout<<endl;

	//EXCEPTION HANDLING
	cout<<"front()\t\t\t";						//print front
	try								//try this instance
	{
		if(po.isEmpty())					//if true, throw exception	
		{
			throw "Exception";
		}

		else							//else, successfully RETURNED
		{
			
			cout<<po.front();
			cout<<"\t\t";
			po.print();					
			cout<<endl;
		}
	}

	catch(...)
	{
		cout<<"Exception"<<endl;
	}
	
	
}
