#include "binary_trees.h"

/**
 * binary_tree_insert_right - insère un noeud comme un enfant droit
 * d'un autre enfant
 * @parent: pointeur vers le noeud dan,s lequel insérer l'enfant droit
 * @value: valeur à stocker dans le nouveau noeud
 * Return: pointeur vers le noeud créer, ou NULL en cas d'échec
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = parent->right;
	new_node->left = NULL;

	if (parent->right != NULL)
		parent->right->parent = new_node;

	parent->right = new_node;

	return (new_node);
}
