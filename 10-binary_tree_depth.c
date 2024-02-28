#include "binary_trees.h"

/**
 * binary_tree_depth - Start of fucnction that measures
 * the diepth of a node in a binary tree
 * @tree: The pointer to the node
 * Return: Depth or 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t valDp;

	valDp = 0;

	if (tree == NULL)
	{


		return (0);


	}
	else
	{

		while (tree->parent != NULL)
		{

			tree = tree->parent;

			valDp++;

		}


		return (valDp);
	}
}
