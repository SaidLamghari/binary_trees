#include "binary_trees.h"

/**
 * binary_tree_preorder - Start of function that oes through
 *			a binary tree using pre-order traversal
 *
 * @tree: The PTR to the root node of the tree to traverse
 *
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
	{

		return;

	}


	if (func == NULL)
	{

		return;

	}



	func(tree->n);


	binary_tree_preorder(tree->left, func);


	binary_tree_preorder(tree->right, func);

}
