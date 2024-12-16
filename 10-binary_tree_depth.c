#include "binary_trees.h"

/**
 * binary_tree_depth - mesure la profondeur d'un noeud
 * dans un arbre binaire
 * @tree: pointeur vers le noeud pour mesurer la profondeur
 * Return: profondeur du noeud si tree est NULL, retourne 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (0);
}
