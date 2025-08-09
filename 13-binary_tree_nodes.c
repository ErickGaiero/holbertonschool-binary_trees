#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - Cuenta los nodos con al menos un hijo
 *
 * @tree: Puntero al nodo raiz del arbol
 *
 * Return: Numero de nodos con al menos un hijo, o 0 si tree es NULL
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_count, right_count, total;
	/* Caso base: arbol vacio */
	if (tree == NULL)
		return (0);
	/* Calcular recursivamente en el subarbol izquierdo */
	left_count = binary_tree_nodes(tree->left);
	/* Calcular recursivamente en el subarbol derecho */
	right_count = binary_tree_nodes(tree->right);
	/* Si el nodo actual tiene al menos un hijo, lo contamos */
	if (tree->left != NULL || tree->right != NULL)
		total = left_count + right_count + 1;
	else
		total = left_count + right_count;

	return (total);
}
