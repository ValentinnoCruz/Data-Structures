

#include<iostream>
#include<string>
using namespace std;

void sort_arr(int condition, int arr[], int arr_size);


int main()
{
    int arr_size,
        vals,
        condition;


    cout  <<  "Enter the size of the array: ";
    cin >> arr_size;

    if(arr_size<=0)
    {
        cout << "\nERROR : you entered an incorrect value for the array size!!" << endl;
    }

    else
    {
    int arr[arr_size];
    cout << "Enter the numbers in the array, separated by a space, and press enter: ";

            for(int i=0;i<arr_size;i++)
            {
                cin >> vals;
                arr[i]=vals;
            }
    cout << "Sort in ascending (0) or descending (1) order: ";
    cin >> condition;

    sort_arr(condition, arr, arr_size);
    }

}


void sort_arr(int condition, int arr[], int arr_size)
{
	int i,j,key;

	if(condition == 1)
	{
	cout << "This is the sorted array in descenidng order: ";
		for(i=1; i<arr_size; i++)
		{
			key= arr[i];

			for(j = i-1;(j >= 0) && (arr[j] < key); j--)
			{
                            arr[j+1] = arr[j];
			}
                    arr[j+1] = key;
		}
		for(int w = 0; w < arr_size ;w++)
		{
                    cout << arr[w] << " ";
		}
	cout  <<  endl;
	}


	if(condition == 0)
	{
	cout << "This is the sorted array in ascending order: ";

                for(i = 1; i < arr_size; i++)
                {
                        key= arr[i];

                        for(j = i-1;(j >= 0) && (arr[j] > key); j--)
                        {
                            arr[j+1] = arr[j];
                        }
                    arr[j+1] = key;
                }
                for(int w = 0; w < arr_size ; w++)
                {
                    cout << arr[w] <<  " ";
                }
        cout << endl;



	}
	else if(condition > 1)
	{
            cout << "You did not enter a valid OPTION to sort the arr!!" << endl;
	}
}
