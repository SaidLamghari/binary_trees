#include "binary_trees.h"


/**
 * binary_tree_is_leaf - Start of function that
 * Checks if a node is a leaf
 * @node: The pointer of the node that i want check
 * Return: 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{


		return (0);

	}


	if (node->left == NULL)
	{
		if (node->right == NULL)
		{

			return (1);


		}

	}


	return (0);


}
