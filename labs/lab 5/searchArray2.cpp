#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string* A,int arraySize);
int binarySearchL(string* A, int arraySize, int k);
int activate;

int main()

{
	int count=-1;					
	ifstream access ("words_in.txt");		
	string dummy;					
	int check;					
	int check2;				
	string* A;					
	string key;				

	while(!access.eof())			
	{
		access>>dummy;			
		count++;				//adds one until it gets the amount of words in file

	}
	cout<<"Number of words in file is "<<count<<": "<<endl;	
	A= new string[count];						//string array is created with a the a size equivalent to the number of words in file
	access.close();						       //close file,
	ifstream accessArr("words_in.txt");		  


	for(int i=0;i<count;i++)				//loop that will input words in the new created array
	{
		accessArr>>dummy;				
		A[i]=dummy;					//words are being strored in array
		cout<<i<<"-"<<A[i]<<endl;
	}
	
	accessArr.close();

	//check if array is sorted
	check=checkArraySort(A,count);

	if(check==-1)
	{
		cout<<"The array is sorted in descending order!"<<endl;
		activate=0;
	}
	
	if(check==1)
	{
		cout<<"The array is sorted in ascending order!!!!!"<<endl;
		activate=1;
	}

//WILL CHECK AGAIN WHETHER ARRAY IS SORTED OR NOT AND THEN CALL BINARY SEARCH FUNCTION
	if(check==0)
	{
		cout<<"Error, this is not a sorted array "<<endl;

	}
	else
        {
            cout<<"Enter word to be searched for in array: ";
            cin>>key;
	   int key2=key.length();

	    //call to binarySearch to find word in array
	    check2 = binarySearchL (A, count, key2);
	    int activate=0;                             		  
	    if(key==A[0])		//when key is equal to the first value then we start "activate"						
		{
			activate=1;
			check2 = 0;		//set check2 to zero so it prints the index of first value
		}
		
		if(check2 >=0|| activate==1)	
		{
			cout<<"Found key "<<key<< " at index "<<check2<<endl;	//prints location of word
		}
			else if(check2== -1|| key != A[check2]||activate==0)		//else "word was not found"
			{
				cout<<"The key "<<key<<" was not found in the array!!"<<endl;
			}
        }
}

//BINARY SEARCH ALGO.
int binarySearchL(string* A, int array_size, int k)
{
	int first=0;
        int last=array_size-1;

	//DESCENDING
	if(activate==0)
	{
        while(first<=last)				//keep array bounded 0 - size of array
        {
			int mid = (first+last)/2;		//split mid then assign it to array index and suppose it splits
			
			if(A[mid].length()==k)		//if word was found then return where it was found (mid)
			{
				return mid;		
			}

			else if (A[mid].length()<k)	//if mid val of array is > word then (subtract) 1 from the medium val
			{
				last = mid-1;
			}
			
			else if(A[mid].length()>k)	//if mid val of array is < word then (add) 1 from the medium value
			{
				first = mid+1;
			}

        }

        return -1;
	} 				

	//ASCENDING ORDER
	if(activate==1)
	{
	  while(first<=last)       
          {
                int mid = (first+last)/2;   //split mid then assign it to array index and suppose that it splits
                if(A[mid].length()==k)     //if word was found then return where it was found (mid)
                {
                        return mid;                     
                }
                else if (A[mid].length()>k) //if mid val of array is > word then (subtract) 1 from the medium value
                {
                        last = mid-1;
                }
                else if(A[mid].length()<k)  //if mid val of array is < word then (add) 1 from the medium value
                {
                        first = mid+1;
                }
        }
        return -1;
	} 
	return 0;
}




//CHECKARRAY FUNCTION
int checkArraySort(string* A,int arraySize)
{
    int descend = 0;			 
    int ascend = 0;			

    for(int i = 0; i < arraySize; i++)
	{
		//tells if array is ascending 
		if( A [i].length() < A [i+1].length()) 	
		{
			ascend = 1;
		}
		
		//tells if array is descending
		if( A[i].length() >A[i+1].length())
		{
			descend = 1;
		}
	}

	if(ascend==1 && descend==0) 		//if array ascends return 1
	{
		return 1;
	}

	else if(descend==1 && ascend==0)	//if array descends return -1
	{
		return -1;
	}

	else					//else return 0 for non sorted array
	{
		return 0;
	}
	

}


