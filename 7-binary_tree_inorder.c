#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_inorder - Recorre un arbol binario en in-order
 *
 * @tree: Puntero a la raiz del arbol a recorrer
 * @func: Puntero a funcion que se llamara para cada nodo
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void(*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	/* Recorrer subarbol izquierdo */
	binary_tree_inorder(tree->left, func);
	/* Procesar nodo actual */
	func(tree->n);
	/* Recorrer subarbol derecho */
	binary_tree_inorder(tree->right, func);
}
