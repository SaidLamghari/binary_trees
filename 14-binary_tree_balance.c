#include "binary_trees.h"


/**
 * binary_tree_balance - Start of function that measures
 * the balance factor of a binary tree
 * @tree: The pointer to the root
 * Return: the result of balance or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int rightHght;
	int leftHght;
	int rslt;


	leftHght = 0;
	rightHght = 0;
	rslt = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		rightHght = binary_tree_height(tree->right);


		leftHght = binary_tree_height(tree->left);


		rslt = leftHght - rightHght;
	}


	return (rslt);
}
