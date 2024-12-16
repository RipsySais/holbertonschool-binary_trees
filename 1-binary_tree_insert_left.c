#include "binary_trees.h"

/**
 * binary_tree_insert_left - insère un noeud comme enfant
 * gauche d'un autre noeud
 * @parent: pointeur vers le noeud dans lequel insérer l'enfant gauche
 * @value: valeur à stocker dans lke nouveau noeud
 * Return: pointeur vers le nouveau noeud crée,
 * ou NULL en cas d'échec
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = parent->left;
	new_node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new_node;


	parent->left = new_node;

	return (new_node);
}
