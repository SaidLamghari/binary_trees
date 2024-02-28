#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdlib.h>
#include <stddef.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;



void binary_tree_print(const binary_tree_t *);

typedef struct binary_tree_s bst_t;

typedef struct binary_tree_s heap_t;

typedef struct binary_tree_s avl_t;

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));

int binary_tree_is_root(const binary_tree_t *node);

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

int binary_tree_is_leaf(const binary_tree_t *node);

void binary_tree_delete(binary_tree_t *tree);

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
