#include <iostream>
using namespace std;

int main()
{

	int size_user = 0; //intializing size
	int condition = 0;

	cout << "Enter the size of the array: "; //get size from user
	cin >> size_user;

	if (size_user <= 0) { //will check if the user's input is valid
		cout << "ERROR: you entered an incorrect value for the array size!";
	} else {
		int array_user[size_user]; // declaring the array
		cout << "Enter the numbers in the array, separated by a space and press enter: ";
			for (int i = 0; i < size_user; i++) { //will read the given  values
				cin >> array_user[i];
	}
		for (int i = 0; i < size_user - 1; i++) { //will check if the values are increasing or not
			if (array_user[i] >= array_user[i+1]) {
				condition = 1;
			}

		}
        // will check if condition is equal to 1 or not
	if(condition == 1) {
		cout << "This is NOT an increasing array!";
	} else {
		cout << "This IS an increasing array!";
		}

	cout << "\n";

	for (int i = 0; i < size_user; i++) {
		cout << array_user[i] << " "; //will print out the array with space 
		}
	}

	cout << "\n";
	return 1;
}

