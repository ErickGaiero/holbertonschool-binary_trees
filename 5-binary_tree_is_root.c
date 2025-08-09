#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_root - Elimina todo un arbol bibario
 *
 * @node: Puntero al nodo
 *
 * Return: 1 si es raiz, 0 en caso contrario o si node es NULL
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	/* Cuando 'node->parent == NULL es verdadero devuelve 1 sino 0 */
	return (node->parent == NULL ? 1 : 0);
}
