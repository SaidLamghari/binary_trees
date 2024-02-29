#include "binary_trees.h"

/**
 * binary_tree_is_full - Start of function that checks
 * if a binary tree is full
 * @tree: the pointer to the root
 *
 * Return: 1 or 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int valRight;
	int valLeft;

	valRight = 0;
	valLeft = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{

		if (tree->left == NULL && tree->right == NULL)
			return (1);

		if (tree->left != NULL && tree->right != NULL)
		{
			valRight = binary_tree_is_full(tree->right);
			valLeft = binary_tree_is_full(tree->left);
		}
		return (valLeft && valRight);
	}



	return (0);
}
