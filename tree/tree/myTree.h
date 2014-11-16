#pragma once

typedef int ElementType;

struct Tree;

Tree* plantTree();

void addElement(Tree *tree, ElementType addedValue);

void printTree(Tree *tree);