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
