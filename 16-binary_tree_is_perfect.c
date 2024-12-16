#include "binary_trees.h"

/**
 * binary_tree_height - mesure la hauteur d'un arbre binaire
 * @tree: pointeur vers le noeud racine de l'arbre à mésurer
 * Return: hauteur de l'arbre, si tree est NULL, retourne 0
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

#include "binary_trees.h"

/**
 * binary_tree_is_perfect - vérifie si un arbre binaire est parfait
 * @tree: pointeur vers le noeud racine de l'arbre à vérifier
 * Return: 1 si l'arbre est parfait, sinon 0, si tree est NULL
 * retourne 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height, size, perfect_size;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	size = binary_tree_size(tree);

	perfect_size = (1 << (height + 1)) - 1;

	return (size == perfect_size);
}
