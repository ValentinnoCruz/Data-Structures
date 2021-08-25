#include <iostream>
#include <string>


using namespace std;
int main()
{
	int num, typo;
	cout << "Enter the number of lines for the punishment: ";
	cin >> num;

	if (num <= 0) {
		cout << "You entered an incorrect value for the number of lines!" ;
	} else {
		cout << "Enter the line for which we want to make a typo: ";
			cin >> typo;
		if (typo <= 0 || typo > num) {
			cout << "You entered an incorrect value for typo! ";
		}else {
			for (int i = 0; i < num - 1; i++) {
			 if (i == typo - 1) 
				cout << "I will always use object oriented programing."<<endl;
				cout << "I will always use object oriented programming."<<endl;
			}
			if (typo == num)
				cout <<"I will always use object oriented programing."<<endl;
			}
	}
	cout << "\n";
	return 1;
}