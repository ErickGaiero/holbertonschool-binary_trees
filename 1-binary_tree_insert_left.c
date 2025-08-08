#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserta nodo commo hijo izquierdo de otro nodo
 *
 * @parent: Nodo padre
 * @value: Valor que se almacenara en el nodo
 *
 * Return: Puntero al nuevo nodo, NULL si falla o si padre es NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *newNode;
	/* Validar que el nodo padre no sea NULL */
	if (parent == NULL)
		return (NULL);
	/* Crea el nuevo nodo */
	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	/* Si ya existe un hijo izquierdo, lo movemos debajo del nuevo nodo */
	if (parent->left != NULL)
	{
		newNode->left = parent->left;
		parent->left->parent = newNode;
	}
	/* Asigna el nuevo nodo como hijo izquierdo del padre */
	parent->left = newNode;

	return (newNode);

}
