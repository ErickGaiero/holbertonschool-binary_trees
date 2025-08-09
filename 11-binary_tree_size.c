#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_size - Mide el tamano de un arbol binario
 *
 * @tree: Puntero al nodo raiz del arbol
 *
 * Return: Tamano del arbol, o 0 si es NULL
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size, right_size;
	/* Caso base: arbol vacio */
	if (tree == NULL)
		return (0);
	/* Calcular tamano del subarbol izquierdo */
	left_size = binary_tree_size(tree->left);
	/* Calcular tamano del subarbol derecho */
	right_size = binary_tree_size(tree->right);
	/* Suma ambos tamanos + 1 por el nodo actual */
	return (left_size + right_size + 1);
}
