#include "binary_trees.h"

/**
 * binary_tree_sibling - recherche le frère d'un
 * noeud dans un arbre binaire
 * @node: pointeur vers le noeud pour trouver le frère
 * Return: pointeur vers le noeud frère, si node est NULL,
 * ou si le parent est NULL, retourne NULL,si le noeud
 * n'a pas de frère, retourne NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
