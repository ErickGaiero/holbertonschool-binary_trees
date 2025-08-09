#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_sibling - Encuentra el hermano de un nodo
 *
 * @node: Puntero al nodo para encontrar a su hermano
 *
 * Return: Puntero al hermano del nodo, o NULL si no tiene hermano
 * o si node es NULL o no tiene padre
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left != NULL && node->parent->left != node)
		return (node->parent->left);
	if (node->parent->right != NULL && node->parent->right != node)
		return (node->parent->right);

	return (NULL);
}
