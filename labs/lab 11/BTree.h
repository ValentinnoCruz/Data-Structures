#ifndef BTREE_H
#define BTREE_H

using namespace std;

// Representation of an element in the linked list
struct Node
{
	int key_value;	// Key value of the node
	Node *left;		// Pointer to the left child node
	Node *right;	// Pointer to the right child node
};

class BTree
{
    // Public Functions/Variables
	public:
		BTree();	// Constructor
		~BTree();	// Destructor

		void insert(int key);
		Node *search(int key);
		void destroy_tree();
		Node *BTree_root();

    // Private Functions/Variables
	private:
		void destroy_tree(Node *leaf);
		void insert(int key, Node *leaf);
		Node *search(int key, Node *leaf);

		Node *root;


};

#endif

