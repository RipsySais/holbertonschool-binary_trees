#include "binary_trees.h"

/**
 * binary_tree_height - mesure la hauteur d'un arbre bnaire
 * @tree: pointeur vers le noeud racine de l'arbre mésurer
 * Return: hauteurde l'arbre, si tree est NULL, retourne 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height > right_height ? left_height : right_height);
}
