#include "binary_trees.h"

/**
 * binary_tree_node - crée un nouveau noeud pour un arbre binaire
 * @parent: pointeur vers le noeud parent du noeud à créer
 * @value: valeur à placer dans un nouveau noeud
 * Return: pointeur vers le nouveau noeud, ou NULL en cas d'échec
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
