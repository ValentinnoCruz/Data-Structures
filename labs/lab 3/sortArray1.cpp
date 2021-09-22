#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main ()
{
	int arrSize,
	    values;


	cout << "Enter the size of the array: ";
	cin >> arrSize;

	if (arrSize< = 0)
	{
	cout << "\nERROR : you entered an incorrect value for the array size!!" << endl;
	}

	else
	{
    	int array[arrSize];
    	cout << "Enter the numbers in the array, separated by a space, and press enter: ";

		for (int i = 0;i<arrSize;i++)
		{
    		cin >> values;
    		array[i] = values;
		}

    	int tmp;
    	cout << "This is the sorted array in ascending order: ";

	        for  (int i  =  0; i < arrSize -1; i++)
		{
			for  (int j  =  i+1; j < arrSize; j++)
			{
				if  (array[i] > array[j])
				{
				tmp  =  array[i];
				array[i]  =  array[j];
				array[j]  =  tmp;

				}
			}
   		 }

		for (int i = 0 ;i<arrSize ;i++)
		{
			cout << array[i] << " ";
		}
		cout << "\nThe algorithm selected the minimum for the transverse of the array " << endl;

	}
}
