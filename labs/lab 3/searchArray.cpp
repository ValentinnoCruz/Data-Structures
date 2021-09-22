#include <iostream>
#include <string>

using namespace std ;

int main()
{
	int size_array,
	    vals,
	    num_search,
	    condition,
	    index,
	    count = 0;
    
    // user inputs size of the array
	cout<<"Enter the size of the array: ";
	cin>>size_array;

    // when there iis nothing in the array itself 
	if (size_array <= 0)
	{
	cout << "\nERROR : you entered an incorrect value for the array size!!" << endl;
	}
        // when the array contains values
    	else
    	{
        	int array[size_array];
        	cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
            
            // loop for user to input all values within given array
    		for (int i=0; i<size_array; i++)
    		{
        		cin >> vals;
        		array[i] = vals;
    
    		}
    		    // once condition is met ask the user to input what value to search
            	cout << "Enter the number to search for in the array: ";
            	cin >> num_search;
        
		for (int i=0; i<size_array; i++)
		{
		count++;
			if (array[i]==num_search)
			{
				cout << "Found the value " << array[i] << " at index "
				     << i <<" which took " << count << " checks" << endl;
				condition = 1;
				index = i;
				break;
			}

		}
		
		// if an incorrect digit was input  
		if (condition == 0)
		{
			cout << "The value " << num_search << " was not found in the array!!" << endl;
		}
		//best case scenario if found in index 0
		if (index == 0)
		{
			cout << "We ran into the best case scenario!! " << endl;
		}
		// worst case scenaio if found in last index location
		if (index == size_array-1)
		{
			cout << "We ran into the worst case scenario " << endl;
		}
	}
}
