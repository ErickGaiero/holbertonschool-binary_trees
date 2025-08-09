#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - Elimina todo un arbol bibario
 *
 * @tree: Puntero a la raiz del arbol a eliminar
 *
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	/* Elimina primero sub arbol izquierdo y luego el derecho */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	/* Libera el nodo actual */
	free(tree);
}
