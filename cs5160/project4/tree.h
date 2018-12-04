#pragma once
#include <iostream>

using namespace std;

class treeNode
{
	private:
		treeNode( int D, treeNode* lt = NULL, treeNode* rt = NULL ) 
		{ left = lt; data = D; right = rt; };   // constructor
		treeNode*	left;						// pointer to the left subtree
		int			data;						// node data
		treeNode*	right;						// pointer to the right subtree
	friend class searchTree;					// give searchTree complete access
};

class searchTree
{
	public:
		searchTree();							// constructor
		~searchTree();							// destructor
		searchTree( const searchTree& );		// copy constructor
		searchTree& operator=(const searchTree&);// overloaded assignment
		bool find( int );						// find a value in the tree
		void insert( int );						// add a new value to the tree
		void remove( int );						// remove a value from the tree
		void inorder() const;					// display the tree inorder
		void preorder() const;					// display the tree preorder
		void postorder() const;					// display the tree postorder
		void level_by_level() const;			// display the tree level-by-level
		int  height() const;					// return the height of the tree
		int  nodeCount() const;					// return number of nodes in the tree
		int  leafCount() const;					// return the number of leaf nodes in the tree

	private:
		treeNode*	root;						// pointer to the root of the search tree

		// add additional variables and function here as needed
};

