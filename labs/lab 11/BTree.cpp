#include <iostream>
#include <stddef.h>
#include "BTree.h"

//CONSTRUCTOR
BTree :: BTree ()
{
	root = NULL;	
}

//DESTRUCTOR
BTree :: ~BTree ()
{
	destroy_tree();		//calls destroy_tree() function to delete tree from root
}

//ROOT
Node* BTree :: BTree_root()
{
	Node *n = root;
	return n;		//when called, it returns the root
}

//DESTROY TREE (LEAF)
void BTree :: destroy_tree(Node* leaf)
{
	Node* po;		
	po = search(leaf->key_value);	//make sure that value to be deleted does exist by calling search
	if (po == NULL)
	{
		cout<<"Value to be deleted does not exist"<<endl;
	}
	else
	{
		if(leaf->right != NULL)			//delete right children
		{
			destroy_tree(leaf->right);
			delete leaf->right;
		}

		if(leaf->left != NULL)
		{
			destroy_tree(leaf->left);	//delete left children
			delete leaf->left;
		}

	}
}

//INSERT (2)
void BTree :: insert(int key, Node* leaf)
{

	Node *hoja = new Node;				//create a new node to be inserted
	hoja->key_value = key;
	hoja->right = NULL;
	hoja->left = NULL;

        if (key < leaf ->key_value)			//check if it should be inserted on the left
	{
		if(leaf->left != NULL)
		{
			insert(key, leaf->left);	//go through subtree until empty space is found
		}
		else
		{
			leaf->left = hoja; 		//assign value
		}
	}

	else if (key > leaf ->key_value)		//check if it should be inserted on the right
	{
		if(leaf->right != NULL)
		{
			insert(key, leaf->right);	//go through subtree until empty space is found
		}
		else
		{
			leaf->right = hoja; 		//assign value
		}
	}
	else
	{
		cout<<"Value is already in tree "<<endl;
	}
}

//SEARCH (2)
Node* BTree :: search(int key,Node *leaf)
{
	if(key == leaf->key_value)		//base statement for recursion, return leaf where value was found
	{
		return leaf;
	}
	
	if (leaf->right ==NULL || leaf->left ==NULL)	//if not found, return NULL
	{
		return NULL;
	}
	else
	{
		if(key < leaf-> key_value)		//go through left children
		{
			search(key, leaf ->left);
		}
		
		else
		{
			search(key,leaf->right);	//go through right children
		}
	}
	

}

//INSERT
void BTree :: insert(int key)
{
	
	Node *n = new Node;				//create node that root will point to
	n->key_value = key;
	n->right = NULL;
	n->left = NULL;

	if(root == NULL)
	{
		root = n; 
	}
	else
	{
		insert(key,root);			//specifically insert a value if root already has one
	}
	
	
}

//SEARCH
Node* BTree :: search(int key)
{
	Node* n = BTree_root();				//get root
	search(key, n);					//call search function
}

//DESTROY
void BTree :: destroy_tree()
{
	destroy_tree(root);				//delete subtree from root
}



