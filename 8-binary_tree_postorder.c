#include "binary_trees.h"

/**
 * binary_tree_postorder - parcourt un arbre binaire en utilisant
 * la traversée post- ordre
 * @tree: pointeur vers le noeud racine de l'arbre à parcourir
 * @func: pointeur vers une fonction à appeler pour chaque neoud
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
