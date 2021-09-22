
#include <iostream>
using namespace std;

int main()
{
	/*  ------------------
	    array size input
	    ------------------*/
	cout << "Enter the size of the array: ";
	int array_size = 0;
	cin >> array_size;
	if (array_size <= 0)
	{
		cout << "\nERROR, enter a correct size for the array";
	}
	else
	{
		int values[array_size];
		cout << "\nEnter the numbers in the array, separated by a space, and press enter: ";
		
		/*  ------------------
	        values are input
	        ------------------*/
		for (int i = 0; i < array_size; i++)
		{
			cin>> values[i];
		}

		/*  ------------------
	        sorting is done
	        ------------------*/
		int num_swaps = 0;
		for (int i = 0; i < array_size; i++)
		{
			int minimum_index = i;

			for (int j = i+1; j < array_size; j++)
			{
				if (values[j] < values[minimum_index])
				{
					minimum_index = j;
				}
			}
			if (i != minimum_index)
			{
				num_swaps++;
				int temp_value_holder = values[i];
				values[i] = values[minimum_index];
				values[minimum_index] = temp_value_holder;
			}
		}

		cout << "\nThis is the sorted array in ascending order: ";
		
		/*  ------------------
	        output the values
	        ------------------*/
		for (int i = 0; i < array_size; i++)
		{
			cout << values[i] << " ";
		}
		cout << "\nThe algorithm selected the minimum for the traverse of the array.";
		cout << "\nIt took " << num_swaps << " swaps to sort the array...";
	}
}
