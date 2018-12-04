#include <iostream>
#include "tree.h"

using namespace std;


// searchTree
//
// Purpose: to initial the search tree
//
// Precondition: 	none
// Postcondition:	properly initialized search tree exist and is referenced by the internal pointer root
//
searchTree::searchTree()
{

}

// searchTree
//
// Purpose: to copy the search tree t
//
// Precondition: 	properly initialized search tree exists and is referenced by the internal pointer t.root
// Postcondition:	copy of tree t is formed and referenced by the internal pointer root
//
searchTree::searchTree( const searchTree& t )
{

}

// ~searchTree
//
// Purpose: release all space allocated to the search tree
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	all space allocated to the tree is released
//
searchTree::~searchTree()
{

}

// find
//
// Purpose: find the node containing x in the search tree
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	returns true if x is in the tree, false otherwise. 
//
bool searchTree::find( int x )
{

	return true;	// must return true or false
}

// insert
//
// Purpose: insert a node containing x into the search tree, if it does not already exists
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	if the value x is not in the tree, a node containing x is insert as a new leaf of the search tree
//

void searchTree::insert( int x )
{

}

// remove
//
// Purpose: remove the node containing x from the search tree, if it exists
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	if the value x is in the tree, x is removed from the tree and the tree is re-structured to maintain the search property
//

void searchTree::remove( int x )
{

}

// inorder
//
// Purpose: to display the tree nodes inorder
//			e.g.	Tree Contents (inorder):  10 20 30 <CR>
//			e.g.	Tree Contents (inorder):  empty    <CR>
//
// Precondition: 	the tree is properly initialized
// Postcondition:	none
//
//
void searchTree:: inorder() const
{

}

// preorder
//
// Purpose: to display the tree nodes inorder 
//			e.g.	Tree Contents (preorder):  20 10 30 <CR>
//			e.g.	Tree Contents (preorder):  empty    <CR>
//
// Precondition: 	the tree is properly initialized
// Postcondition:	none
//
//
void searchTree:: preorder() const
{	

}

// postorder
//
// Purpose: to display the tree nodes inorder
//			e.g.	Tree Contents (postorder):  20 30 10 <CR>
//			e.g.	Tree Contents (postorder):  empty    <CR>
//
// Precondition: 	the tree is properly initialized
// Postcondition:	none
//
//
void searchTree:: postorder() const
{

}

// level_by_level
//
// Purpose: to display the tree nodes level-by-level
//			e.g.	Tree Contents (level-by-level):  20 10 30 <CR>
//			e.g.	Tree Contents (level-by-level):  empty    <CR>
//
// Precondition: 	the tree is properly initialized
// Postcondition:	none
//
//
void searchTree:: level_by_level() const
{

}

// height
//
// Purpose: compute the height of a binary search tree
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	returns height of the tree, 0 otherwise. 
//
int searchTree::height() const
{

	return 0;	// must return height >= 0
}

// nodeCount
//
// Purpose: count the number of nodes a binary search tree
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	returns node count >= 0 
//
int searchTree:: nodeCount() const
{

	return 0;	// must return count >= 0
}


// leafCount
//
// Purpose: count the number of leaf nodes in a binary search tree
//
// Precondition: 	properly initialized search tree exist and is referenced by the internal pointer root
// Postcondition:	returns leaf node count >= 0 
//
int searchTree:: leafCount() const
{

	return 0;	// must return count >= 0
}