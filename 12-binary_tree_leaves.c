#include "binary_trees.h"

/**
 * binary_tree_leaves - The Fuanction that counts the leaves in a binary tree
 * @tree: The pointer to the root node
 * Return: leaves(total) or Null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{

	size_t lvsRight;
	size_t lvsLeft;
	size_t total;

	total = 0;

	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL)
	{
		if (tree->right == NULL)
		{
			return (1);
		}
	}

//	if (tree->left != NULL)
		lvsLeft = binary_tree_leaves(tree->left);
//	if (tree->right != NULL)
		lvsRight = binary_tree_leaves(tree->right);

	total = lvsLeft + lvsRight;

	return (total);
}
