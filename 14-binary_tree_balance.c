#include "binary_trees.h"
/**
 * binary_tree_heightc - Start of function that measures
 * the height of a binary tree
 * @tree: the pointer to the root node
 * Return: the Height or 0
 */
size_t binary_tree_heightc(const binary_tree_t *tree)
{
	size_t leftHght;
	size_t rightHght;

	rightHght = 0;
	leftHght = 0;
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left != NULL)
		{
			leftHght = binary_tree_heightc(tree->left) + 1;
		}
		if (tree->right != NULL)
		{
			rightHght = binary_tree_heightc(tree->right) + 1;
		}
		if (leftHght < rightHght)
		{
			return (rightHght);
		}
		else
		{
			return (leftHght);
		}
	}
}

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
		rightHght = ((int)binary_tree_heightc(tree->right));


		leftHght = ((int)binary_tree_heightc(tree->left));


		rslt = leftHght - rightHght;
	}

		return (rslt);

}
