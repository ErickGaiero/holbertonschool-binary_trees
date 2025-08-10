#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * height - Calculate the height of a binary tree
 * @tree: Pointer to the root node
 * Return: Height of the tree
 */

static size_t height(const binary_tree_t *tree)
{
	size_t left;
	size_t right;

	if (tree == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * binary_tree_balance - Calculate a balance of binary tree
 * @tree: Pointer to tree
 * Return: Balance
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)height(tree->left);
	right_height = (int)height(tree->right);
	
	return (left_height - right_height);

}
