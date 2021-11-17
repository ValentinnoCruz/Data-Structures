#include <iostream>
#include "LinkedList.h"
#include "Stack_char.h"

using namespace std;

int main()
{
	stack po;
	//table of contents
	cout<<"Function call"<<"\t\tOutput"<<"\t\tStack Contents\n"<<endl;	
	
	//check if its empty
	cout<<"isEmpty()";							
	if(po.isEmpty())
	{
		cout<<"\t\ttrue ";
	}

	else
	{
		cout<<"\t\tfalse ";
	}
	
	cout<<"\t\t";
	po.print();
	cout<<endl;

    //add A
	cout<<"push(A)";			
	po.push('A');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;

	//add Y
	cout<<"push(Y)";			
	po.push('Y');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;
	
    //get size of stack
	cout<<"size()"<<"\t\t\t";		
	cout<<po.size();

	cout<<"\t\t";
	po.print();
	cout<<endl;
	
	cout<<"pop()"<<"\t\t\t"<<po.top();
    //remove from back
	po.pop();			
	
	cout<<"\t\t";
	po.print();				
	cout<<endl;

	
	cout<<"isEmpty()";
	//check if its empty
	if(po.isEmpty())			
	{
		cout<<"\t\ttrue ";
	}

	else
	{
		cout<<"\t\tfalse ";
	}
	
	cout<<"\t\t";
	po.print();
	cout<<endl;

    //add D
	cout<<"push(D)";			
	po.push('D');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;
	
	cout<<"top()";
	//print last value
	cout<<"\t\t\t"<<po.top();		
	
	cout<<"\t\t";
	po.print();
	cout<<endl;
	
	cout<<"push(T)";
	po.push('T');
	cout<<"\t\t";
	
	cout<<"\t\t\t";
	po.print();
	cout<<endl;

	cout<<"pop()"<<"\t\t\t"<<po.top();	
	//delete from back
	po.pop();				
	
	cout<<"\t\t";
	po.print();
	cout<<"\n"<<endl;

	
}

