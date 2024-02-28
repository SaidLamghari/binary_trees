#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a B.T. node.
 * @parent: Pointer to the parent node .
 * @value: Value of the new node.
 * Return: the New node or NULL.
 **/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newbtnode;

	newbtnode = malloc(sizeof(binary_tree_t));
	if (newbtnode == NULL)
	{
		return (NULL);
	}
	else
	{
		newbtnode->n = value;
		newbtnode->parent = parent;
		newbtnode->right = NULL;
		newbtnode->left = NULL;

		return (newbtnode);
	}
}
