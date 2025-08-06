#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *binary_tree_is_leaf - Check if a node is a leaf
 *@node: Pointer to node
 *Return: 1 if is leaf, 0 if not
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node == NULL)
	{
		return (0);
	}

	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
