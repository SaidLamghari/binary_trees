#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_insert_right - Functin that Inserts
 *		a node as the right-child of another node
 * @parent: Pointer insert in the right-child
 * @value: Value of the new node
 *
 * Return: New node or Nullll
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newBTnode;

	newBTnode = binary_tree_node(parent, value);

	if (parent == NULL || newBTnode == NULL)
	{
		return (NULL);
	}




	if (parent->right != NULL)
	{
		newBTnode->right = parent->right;

		parent->right->parent = newBTnode;
	}


	parent->right = newBTnode;

	return (newBTnode);
}
