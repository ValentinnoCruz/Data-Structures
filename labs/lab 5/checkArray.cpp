#include <iostream>
#include <string>
#include <fstream>


using namespace std;

int checkArraySort(string* A,int arraySize);

int main()
{
	int count=0;			    
	ifstream access ("words_in.txt");  
	string dumb;			  
	int check;
	string* A;

	while(!access.eof())	  
	{
		access>>dumb;	
		count++;
	}
	cout<<"Number of words in file is "<<count<<": "<<endl;	
	A= new string[count];			 
	access.close();				
	ifstream accessArr("words_in.txt");    

	for(int i=0;i<count;i++)			
	{
		accessArr>>dumb;
		A[i]=dumb;				
		cout<<A[i]<<endl;

	}
	accessArr.close();

 	check=checkArraySort(A,count);			

	if(check==-1)				
	{
		cout<<"The array is sorted in descending order!"<<endl;
	}

        if(check==0)					
        {
                cout<<"The array is not sorted!"<<endl;
        }

        if(check==1)	
        {
                cout<<"The array is sorted in ascending order!"<<endl;
        }

 }


int checkArraySort(string* A,int arraySize)
{
        int descend = 0;
	int ascend = 0;

	for(int i = 0; i < arraySize; i++)
	{
			//ascending check
			if( A [i] > A [i+1]) 
			{
				ascend = 1;
				
			}	
			//descending check
			else if(A [i] < A [i+1])
			{
				descend = 1;
				
			}

	}

		if(ascend==1 && descend==0) 	 //ascending array returns 1
		{
			return 1;
		}
		else if(descend==1 && ascend==0) //descending array returns -1
		{
			return -1;
		}
		else				//if it's not sorted return 0
		{	
			return 0;
		} 
	
}

