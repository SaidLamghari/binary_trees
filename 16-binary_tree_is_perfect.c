#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Start of function that checks
 * if a binary tree is perfect
 * @tree: the pointer to the root
 * Return: 1 or 0
 * */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t valExpctd;
	size_t valHght;

	valExpctd = 0;
	valHght = 0;
	    
	if (tree == NULL)
	{

		return (0);

	}
	        


	valHght = binary_tree_height(tree);


	valExpctd = (1 << valHght) - 1;

	return (binary_tree_size(tree) == valExpctd);
}
