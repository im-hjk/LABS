#include <stdio.h>
#include "BST.h"

void Search(BST *_Node, int value)
{
	Node *Value = _Node->root;
	
	while(1)
	{
		if(Value->key == value)      // if there is same value
			return true;
		else
			return false;
	}
}