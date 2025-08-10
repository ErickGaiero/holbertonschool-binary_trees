#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Verifica si un arbol binario es perfecto
 *
 * @tree: Puntero al nodo raiz del arbol
 *
 * Return: 1 si es perfecto, 0 si no lo es o si tree es NULL
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size;

	if (tree == NULL)
		return (0);
	/* Usar las funciones ya implementadas */
	height = binary_tree_height(tree);
	size = binary_tree_size(tree);
	/* Arbol perfecto: */
	/* Tiene exactamente 2^(h+1) - 1 nodos. */
	/* Digamos que lo que hace matematicamente es calcular */
	/* la cantidad de ndodos que tiene el arbol y para que sea perfecto */
	/* tiene que ser en potencia de 2 ya que cada nodo creceria con dos */
	/* hijos, y al total le restamos 1 ya que el primer nodo es unico */
	if (size == (size_t)((1 << (height + 1)) - 1))
		return (1);

	return (0);
}
