#include <stdlib.h>
#include "binary_trees.h"


/**
 * binary_tree_delete - Start of funcnction that
 * Deletes an entire binary tree
 * @tree: Ptr of the root that will be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;


	}
	else
	{



		binary_tree_delete(tree->left);


		binary_tree_delete(tree->right);


		free(tree);
	}



	tree = NULL;



}
