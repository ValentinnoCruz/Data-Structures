#include <iostream>
#include <string.h>

using namespace std;

 int main()
{
	char  str_user[100], condition; //array with 100 indices
	int a, b = 0;                  //intializing integers a & b
	cout << "Enter the string to reverse: "; //will ask the user for string
	cin >> str_user;
	a = 0;
	b = strlen(str_user) - 1; //find the length of the given string

	while (a < b) {                      //will check if a is less than b
		condition = str_user[a];    //will set condition to str_user[a]
		str_user[a] = str_user[b]; //str_user[a] will then be set to str_user[b]
		str_user[b] = condition;  //will set str_user[b] to condition
		a++;  //will increase a
		b--; //will decrease b
	}
	
	cout<< "The reverse of the string is: " << str_user << endl; //will print out the reverse string
	
	return 0;
}
