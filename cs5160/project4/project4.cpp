#include <iostream>
#include "tree.h"

using namespace std;

void printAll( searchTree& t )
{
	cout << "Inorder:" << endl; 			
	t.inorder();	
	cout << "Preorder: " << endl;			
	t.preorder();
	cout << "Postorder: " << endl;			
	t.postorder();
	cout << "Level-by-level: " << endl;		
	t.level_by_level();
	cout << "Height:     "	<< t.height() << endl;
	cout << "Node count: "  << t.nodeCount() << endl;
	cout << "Leaf count: "  << t.leafCount() << endl;
}

void copyTest( searchTree t )
{
		printAll( t );
		cout << "Destroying the copy" << endl;
}

void main()
{
	cout << "Ready to construct the tree" << endl;
	{
		searchTree t;

		cout << "Testing what happens when printing an empty tree" << endl;

		printAll( t );

		cout << "Inserting 40" << endl;
		t.insert(40);

		printAll( t );

		cout << "Inserting 10, 5, 20" << endl;
		t.insert(10);
		t.insert(5);
		t.insert(20);
		printAll( t );

		cout << "Inserting 60, 50, 45, 55, 65, 70" << endl;
		t.insert(60);
		t.insert(50);
		t.insert(45);
		t.insert(55);
		t.insert(65);
		t.insert(70);
		printAll( t );

		cout << "Testing copy constructor" << endl;
		copyTest( t );

		cout << "Deleting 55, 65, and 40 " << endl;
		t.remove( 55 );		// remove a leaf
		t.remove( 65 );		// remove internal node with one child
		t.remove( 40 );		// remove internal node (root) with two children

		printAll( t );

		cout << "Deleting 10, 5, 20 " << endl;
		t.remove( 10 );
		t.remove( 5 );
		t.remove( 20 );

		printAll( t );

		cout << "Ready to destroy the tree" << endl;
	}
	cout << "Test complete" << endl;
}



