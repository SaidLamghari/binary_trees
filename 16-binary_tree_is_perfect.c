#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Statrt of function that Checks
 * if a binary tree is perfect
 * @tree: the pointer to the root
 *
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int valPLeft;
	int valPRight;
	int valLHeight;
	int valRheight;

	valPLeft = 0;
	valPRight = 0;
	valLHeight = 0;
	valRheight = 0;

	if (tree == NULL)
	{
		return (0);
	}



	if (tree->left == NULL && tree->right == NULL)
		return (1);


	if (tree->left == NULL || tree->right == NULL)
		return (0);


	valPLeft = binary_tree_is_perfect(tree->left);
	valPRight = binary_tree_is_perfect(tree->right);
	valLHeight = binary_tree_height(tree->left);
	valRheight = binary_tree_height(tree->right);


	return (valPLeft && valPRight && valLHeight == valRheight);
}
