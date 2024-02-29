#include "binary_trees.h"

/**
 * binary_tree_nodes - Start of function that counts the nodes
 * with at least one child in a binary tree
 * @tree: The pointer to the root
 * Return: total node or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t valRight;
	size_t valLeft;
	size_t total;

	valRight = 0;
	valLeft = 0;
	total = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->right != NULL)
		{
			valRight = binary_tree_nodes(tree->right);
		}
		if (tree->left != NULL)
		{
			valLeft = binary_tree_nodes(tree->left);
		}

		total = valLeft + valRight + 1;
		return (total);
	}

	return (0);
}
