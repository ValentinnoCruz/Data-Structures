

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	int count=-1;		
	ifstream theFile ("words_in.txt");
	string dumb;				

	while(!theFile.eof())				//will read file and stop when everything has been read
	{
		theFile>>dumb;				
		count++;
	}
	cout<<"Number of words in file is "<<count<<": "<<endl;		

	string arr[count];				//string array is created with a the a size equivalent to the number of words in file

	theFile.close();				

	ifstream file("words_in.txt");			

	for(int i=0;i<count;i++)			//loop that will input words in the new created array
	{
		file>>arr[i];				
		cout<<arr[i]<<endl;

	}


	theFile.close();

	ofstream theFile2 ("words_out.txt");		

        for(int i=0;i<count;i++)			//loop that will give values to the new created file
        {
		theFile2<<arr[i]<<endl;			
	}

}

