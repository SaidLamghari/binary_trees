#include "binary_trees.h"

/**
 * binary_tree_height - Start of function that measures
 * the height of a binary tree
 * @tree: the pointer to the root node
 * Return: the Height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHght, rightHght;

	if (tree == NULL)
	{

		return (0);

	}
	else
	{

		if (tree->left != NULL)
		{
			leftHght = binary_tree_height(tree->left);
		}
		if (tree->right != NULL)
		{
			rightHght = binary_tree_height(tree->right);
		}
		if (leftHght > rightHght)
		{
			return (leftHght + 1);
		}
		else
		{
			return (rightHght + 1);
		}
	}
}
