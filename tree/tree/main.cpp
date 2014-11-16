#include <cstdlib>
#include <iostream>
#include "myTree.h"

using namespace std;

void main()
{
	Tree *tree = plantTree();

	addElement(tree, 5);
	addElement(tree, 4);
	addElement(tree, 10);
	addElement(tree, -1);
	addElement(tree, 3);

	printTree(tree);
}