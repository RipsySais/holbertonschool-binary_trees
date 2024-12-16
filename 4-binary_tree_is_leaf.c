#include "binary_trees.h"

/**
 * binary_tree_is_leaf - vérifie si le noeud est une feuille
 * @node: pointeur vers le noeud à vérifier
 * Return: 1 si le noeud est une feuille sinon 0
 * si le noeud est NULL, retourne 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
