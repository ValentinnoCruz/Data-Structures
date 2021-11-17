#include <iostream>
#include "LinkedList.h"
#include "Stack.h"

using namespace std;

int main()
{
	cout<<"SUMMARY OF STACK"<<endl;
	stack po;

	int arr[10] = {0,1,2,3,4,5,6,7,8,9};			//10 values that will be added to stack
	
	for(int i=0 ; i < sizeof(arr) / sizeof(arr[0]) ; i++)
	{
		po.push(arr[i]);				//adding values to stack
	}

	cout<<"Last element...";				//outputs last element
	cout<<po.top()<<endl;

	cout<<"The size of the stack is: " <<po.size()<<endl; //stack size
	
	if(!po.isEmpty())					//check stack is empty
	{
		cout<<"stack is NOT empty "<<endl;
	}

	else
	{
		cout<<"stack IS empty "<<endl;
	}
	cout<<"Printed values of stack are the following [";	//print stack vals
	po.print();
	cout<<"]"<<endl;

	cout<<"Removing a front value..."<<endl;		
	po.pop();				

	
	cout<<"Printed values of stack are the following [";	
	po.print();
	cout<<"]"<<endl;
	
	//after back is removed output size of stack
	cout<<"The size of the stack is: " <<po.size()<<endl;	

	cout<<"Inserting a value..."<<endl;
	po.push(12);

	cout<<"Printed values of stack are the following [";	//prints stack vals
	po.print();
	cout<<"]"<<endl;
	
	//craete 2nd list
	cout<<"creating a second list..."<<endl;
	stack pi;

	pi.push(67);
	pi.push(23);
	pi.push(10);
	pi.push(90);

	cout<<"Printed values of stack 2 are the following [";	//prints stack vals
	pi.print();
	cout<<"]"<<endl;
	
	cout<<"clear second list..."<<endl;
	pi.clear();						//clear

	if(po.isEmpty())					//look if stack is empty
	{
		cout<<"stack 2 is NOT empty "<<endl;
	}

	else
	{
		cout<<"stack 2 IS empty "<<endl;
	}
}

