#include "binary_trees.h"

/**
 * binary_tree_is_root - vérifie si un noeud est une racine
 * @node: pointeur vers le noeud à vérifier
 * Return: 1 si le noeud est une racine,sinon 0
 * si le noeud est NULL, retourne 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
