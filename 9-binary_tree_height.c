#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_height - Mide la altura de un arbol binario
 *
 * @tree: Puntero a la raiz del arbol
 *
 * Return: Altura del arbol, o 0 si tree es NULL
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	/* Si no tiene hijos, altura es 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	/* Calcula altura de cada subarbol */
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	/* Retornar la mayor altura + 1 (por la arista actual) */
	if (left_h > right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
}
