#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Function that Inserts a node
 *		as the left-child of another node
 * @parent: Pointer that insert in the left
 * @value: Value of the new node
 *
 *
 * Return: New node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newBTnode;

	if (parent == NULL)
	{
		return (NULL);
	}


	newBTnode = binary_tree_node(parent, value);
	if (newBTnode == NULL)
	{
		return (NULL);
	}


	if (parent->left != NULL)
	{
		newBTnode->left = parent->left;
		parent->left->parent = newBTnode;
	}

	parent->left = newBTnode;

	return (newBTnode);
}
