#include "binary_trees.h"

/**
 * binary_tree_uncle - trouver l'oncle d'un noeud dans un arbre binaire
 * @node: pointeur vers le noeud pour trouver l'oncle
 * Return: pointeur vers l'oncle du noeud, si node est NULL,
 * ou si le parent est NULL,retourne NULL,si le noeud n'a
 * pas d'oncle,retourne NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);

	return (NULL);
}
