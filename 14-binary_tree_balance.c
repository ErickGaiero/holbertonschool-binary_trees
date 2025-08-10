#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate a balance of binary tree
 * @tree: Pointer to tree
 * Return: Balance
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return binary_tree_height(tree->left) - binary_tree_height(tree->right);
}
