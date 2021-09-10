#include <iostream>
using namespace std;
int main()
{
	int User = 0; //int User is set to 0
	int neg_num = 0; //negative_num will be set to 0
	cout << "Enter the size of a 2D array: "; //will ask the user the size of 2D array
	cin >> User;


	if (User > 10) { //will check if the user input is valid/on range
		cout << "ERROR: Your array is too large! Enter 1 to 10. ";
	} else if (User < 0) {
		cout << "ERROR: You entered an incorrect value for the array size! ";
	} else {
		int array_user[User][User]; //initializing the 2D array with the user input as the range

		for (int a = 0; a < User; a++) { //will check if the values are less than the user input
			cout << "Enter the values for row " << (a+1) << ", separated by a space and press enter: ";
				for (int b = 0; b < User; b++) {
					cin >> array_user[a][b]; //will assign the values to array_user
					if (array_user[a][b] < 0) { //will check for negative values
						neg_num = neg_num + 1;
						}
					}
				}

		if (neg_num == 0) { //if there are negative values, will print out
			cout << "All values are non-negative!";
		} else {
			cout << "There are " << neg_num << " negative values!";
			}
		}

		cout << "\n";
		return 0;
}
