#include "binary_trees.h"

/**
 * binary_tree_size - Start of the function that measures
 * the size of a binary tree
 * @tree: the pointer to the root node
 * Return: the Size or 0
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t valRight;
	size_t valLeft;
	size_t total;

	valRight = 0;
	valLeft = 0;
	total =  0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{

		size_t valLeft = binary_tree_size(tree->left);

		size_t valRight = binary_tree_size(tree->right);

	}



	total = valLeft + valRight + 1;


	return (total);
}
