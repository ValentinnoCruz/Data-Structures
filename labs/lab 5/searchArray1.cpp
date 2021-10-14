#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int checkArraySort(string* A,int arraySize);

int binarySearchR(string* A, int first, int last, int key);
int activate;


int main()

{

	int count=-1;					
	ifstream access ("words_in.txt");		
	string dumb;					
	int check,					
	    check_b;					
	string* A;					
	string key;					

	while(!access.eof())				
	{
            access>>dumb;				
            count++;
	}
        
	cout<<"Number of words in file is "<<count<<": "<<endl;		//prints out number of words
	A= new string[count];						
	access.close();							//close file
	ifstream accessArr("words_in.txt");				


	for(int i=0;i<count;i++)    //loop that will input words in the new created array
	{ 
            accessArr>>dumb;	// variable 'dumb' gives ability to store data within it so it can be passed in the array
            A[i]=dumb;				
            cout<<i<<"-"<<A[i]<<endl;		
	}

	accessArr.close();
	
	// check if array is sorted
	check=checkArraySort(A,count);			

	if(check==-1)
	{
            cout<<"The array is sorted in descending order!"<<endl;
            activate=1;
	}
        
	if(check==1)
	{
            cout<<"The array is sorted in ascending order!"<<endl;
            activate=0;
	}


        // checks is array is sorted then calls binary search function

	if(check==0)	// occurs when array needs to be sorted

	{
            cout << "Error, this is not a sorted array "<<endl;
	}

	else
        {

            cout<<"Enter word to be searched for in array: ";		

            cin>>key;			 // user inputs word to be searched
	    int key2 = key.length();	// conv. the word so it gives us the # of chars to use it in binarySearch

	     //call to binarySearch to find word in array
	    check_b=binarySearchR (A, 0 , count-1, key2);


	    if(check_b >-1)		// if this is true then print the word found and index
	    {
	    	cout<<"Found key "<<key<< " at index "<<check_b<<endl;

	    }

	    else if(check_b== -1)   // if this is true then word was not found
            {
	    	cout<<"The key "<<key<<" was not found in the array!!"<<endl;	

	    }
        }
}

//BINARY SEARCH: RECURSIVE FUNCTION
int binarySearchR(string* A, int first, int last, int key)
{
	// ASCEND
	if(activate==0)		//if actiavte equals zero then use binary search for the acending array		
	{
                // makes sure that the key value doesn't go out of bonds (first and last)
		if(key < A[first].length() || key > A[last].length())
 		{
                    return -1; 	//NOT FOUND
        	}

   		int mid = ((first+last)/2); // int that will be assigned to array's index to split it

   		if(key==A[mid].length()) // if word is found then return the index
    		{
        		return mid;
    		}

        	else
        	{       // if not found and < split array then we check how array should split
        		if(key < A[mid].length())
        		{
                		return binarySearchR(A,first,mid-1,key);
        		}

        		else	// if not found and < split array then we check how array should spli
        		{
            			return binarySearchR (A,mid+1,last,key);
        		}
        	}
	}
	//DESCENDING
	if(activate==1)		//if actiavte equals one then use binary search for the acending array
	{

		if(key > A[first].length() || key < A[last].length())//makes sure that the key value doesn't go out of bonds (first and last)
        	{
                	return -1; //NOT FOUND
        	}

        	int mid = ((first+last)/2);//integer that will be assigned to array's index to split it
                
        	if(key==A[mid].length()) // if word is found
        	{
                	return mid;
        	}

        	else
        	{
                	if(key > A[mid].length()) // if not found and < split array then we check how array should split
                	{
                        	return binarySearchR(A,first,mid-1,key);
                	}

                	else // if not found and < split array then we check how array should split
                	{
                        	return binarySearchR (A,mid+1,last,key);
                	}
        	}
	}
        return true;
}


int checkArraySort(string* A,int arraySize)
{
    int descend = 0;      // decides if array descends
    int ascend = 0;      // decides if array ascends

    for(int i = 0; i < arraySize; i++)
	{
		// tells if array is ascending 
		if( A [i].length() < A [i+1].length()) 
		{
                    ascend = 1;

		}
		// tells if array is descending
		else if(A [i].length() > A [i+1].length())
		{

                    descend = 1;
		}

	}

	if(ascend==1 && descend==0) 	  //if array ascends return 1
	{
		return 1;
	}

	else if(descend==1 && ascend==0) //if array descends return -1
	{
		return -1;
	}

	else				//else return 0 for non sorted array
	{
		return 0;
	}
    
}
