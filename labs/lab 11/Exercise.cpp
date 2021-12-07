#include <iostream>
#include "BTree.h"

using namespace std;

int main()
{
    BTree myTree;

    myTree.insert(10);
    myTree.insert(14);
    myTree.insert(6);
    myTree.insert(5);
    myTree.insert(8);
    myTree.insert(11);
    myTree.insert(18);

    Node *tempNode;
    cout << "Root has key: ";
    cout << myTree.BTree_root()->key_value << endl;
    cout << "Left child of root has key: ";
    cout << myTree.BTree_root()->left->key_value << endl;
    cout << "Right child of root has key: ";
    cout << myTree.BTree_root()->right->key_value << endl << endl;

    cout << "Searching for key 14..." << endl;
    tempNode = myTree.search(14);
    if (tempNode != NULL)
    {
        cout << "Key 14 found!" << endl;
        cout << "Its left child has key: ";
        cout << tempNode->left->key_value << endl;
        cout << "Its left child has key: ";
        cout << tempNode->right->key_value << endl << endl;
    }
    else
        cout << "Key 14 not found!" << endl << endl;

    cout << "Searching for key 13..." << endl;
    tempNode = myTree.search(13);
    if (tempNode != NULL)
    {
        cout << "Key 13 found!" << endl << endl;
    }
    else
        cout << "Key 13 not found!" << endl << endl;

    return 1;
}


