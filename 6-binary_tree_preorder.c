#include "binary_trees.h"

/**
 * binary_tree_preorder - parcourt un arbre binaire en utilisant
 * la traversée pré-commandée
 * @tree: pointeur vers le noeud racine de l'arbre à parcourir
 * @func: pointeur vers la fonction à appeler pour chaque noeud
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
