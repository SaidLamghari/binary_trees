#include "binary_trees.h"

/**
 * binary_tree_uncle - Start of function finds the
 * uncle of a node
 * @node: the pointer to the node
 * Return: The uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grdprt;


	if (node == NULL)
	{
		return (NULL);
	}
	if (node->parent == NULL)
	{
		return (NULL);
	}

	grdprt = node->parent->parent;

	if (grdprt == NULL)
	{
		return (NULL);
	}

	if (grdprt->left == node->parent)
	{
		return (grdprt->right);
	}
	else
	{
		return (grdprt->left);
	}

}
