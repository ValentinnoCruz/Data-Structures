#include <iostream>
#include "LinkedList.h"

using namespace std;

int main()
{
    LinkedList firstList;
    LinkedList secondList;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    else
        cout << "The first list is NOT empty..." << endl;    

    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    else
        cout << "The second list is NOT empty..." << endl;


    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl; 
    cout << "The size of the second list is: " << secondList.size() << endl;

    // Insert some values into the first list
    firstList.insertAtFront(1);
    firstList.insertAtFront(2);
    firstList.insertAtFront(3);
    firstList.insertAtFront(4);
    firstList.insertAtFront(5);

    // Print the lists    
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;

    // Insert a value into the second list
    secondList.insertAtFront(25);

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;

    // Clear the second list and remove an item from the first list
    secondList.clear();
    firstList.removeFromFront();

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;

    // Clear the first list and add five items into the second list
    firstList.clear();
    secondList.insertAtFront(-5);
    secondList.insertAtFront(0);
    secondList.insertAtFront(5);
    secondList.insertAtFront(10);

    // Print the lists
    cout << "Here is the first list: ["; firstList.print(); cout << "]" << endl;
    cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;

    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl;
    cout << "The size of the second list is: " << secondList.size() << endl;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    else
        cout << "The first list is NOT empty..." << endl;

    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    else
        cout << "The second list is NOT empty..." << endl;

    // Remove all the elements of the second list using a for loop
    for(int i=0; i<6; i++)
    {
        cout << "Here is the second list: ["; secondList.print(); cout << "]" << endl;

        if(secondList.removeFromFront())        
            cout << "Successfully removed an item from the list..." << endl;
        else
            cout << "COULD NOT remove an item from the list!" << endl;
    }

    // Print the size of the lists
    cout << "The size of the first list is: " << firstList.size() << endl;
    cout << "The size of the second list is: " << secondList.size() << endl;

    // Check if the lists are empty
    if(firstList.isEmpty())
        cout << "The first list is empty!" << endl;
    else
        cout << "The first list is NOT empty..." << endl;

    if(secondList.isEmpty())
        cout << "The second list is empty!" << endl;
    else
        cout << "The second list is NOT empty..." << endl;


    return 1;
}


