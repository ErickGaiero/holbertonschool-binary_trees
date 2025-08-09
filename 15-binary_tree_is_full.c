#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_full - Comprueba si un arbol binario esta lleno
 *
 * @tree: Puntero al nodo raiz del arbol
 *
 * Return: 1 si esta lleno, 0 en caso contrario o si el arbol es NULL
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	/* Casp base: arbol vacio */
	if (tree == NULL)
		return (0);
	/* Si es una hoja(sin hijos), esta "lleno" */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/* Si tiene ambos hijos, comprobamos que ambos subarboles esten llenos */
	if (tree->left != NULL && tree->right != NULL)
	{
		int left_full = binary_tree_is_full(tree->left);
		int right_full = binary_tree_is_full(tree->right);

		if (left_full == 1 && right_full == 1)
			return (1);
		else
			return (0);
	}
	/* Suma tiene solo un hijo, no es un arbol lleno */
	return (0);
}
