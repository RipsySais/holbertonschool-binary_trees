#include "binary_trees.h"

/**
 * binary_tree_is_full - vérifie si un arbre binaire est pleine
 * @tree: pointeur vers le noeud racine de l'arbre à vérifier
 * Return: 1 si l'arbre est pleine, sinon 0
 * si tree est NULL, retourne 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if ((tree->left == NULL && tree->right == NULL) ||
		(tree->left != NULL && tree->right != NULL))
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}
