#include "binary_trees.h"

/**
 * binary_tree_leaves - compte les feuilles dans un arbre binaire
 * @tree: pointeur vers le noeud racine
 * de l'arbre à compter les feuilles
 * Return: nombre de feuilles dans l'arbre, si tree est NULL
 * retourne 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
