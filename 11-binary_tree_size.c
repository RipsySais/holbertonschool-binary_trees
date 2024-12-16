#include "binary_trees.h"

/**
 * binary_tree_size - mesure la taille d'un arbre binaire
 * @tree: pointeur vers le noeud racine de l'arbre mesurer
 * Return: taille de l'arbre, si tree est NULL, retourne 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
