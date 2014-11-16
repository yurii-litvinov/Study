#include "myTree.h"
#include <iostream>

using namespace std;

struct TreeElement
{
	ElementType value;
	TreeElement *left;
	TreeElement *right;
};

struct Tree
{
	TreeElement *head;
};

Tree* plantTree()
{
	Tree *newTree = new Tree;
	newTree->head = nullptr;
	return newTree;
}

void addElement(Tree *tree, ElementType addedValue)
{
	TreeElement *newElement = new TreeElement;
	newElement->value = addedValue;
	newElement->left = nullptr;
	newElement->right = nullptr;

	TreeElement *cursor = tree->head;
	if (cursor == nullptr)
	{
		tree->head = newElement;
	}
	else while (addedValue != cursor->value)
	{
		if (addedValue < cursor->value)
		{
			if (cursor->left == nullptr)
			{
				cursor->left = newElement;
				break;
			}
			cursor = cursor->left;
		}
		else if (addedValue > cursor->value)		
		{	
			if (cursor->right == nullptr)
			{
				cursor->right = newElement;
				break;
			}
			cursor = cursor->right;			
		}
	}
}

void printTreeElement(TreeElement *treeElement)
{
	if (treeElement->left != nullptr)
	{
		printTreeElement(treeElement->left);
	}

	cout << treeElement->value << " ";

	if (treeElement->right != nullptr)
	{
		printTreeElement(treeElement->right);
	}
}

void printTree(Tree *tree)
{
	if (tree->head == nullptr)
	{
		cout << "ololo" << endl;
	}
	else
	{
		printTreeElement(tree->head);
	}
}