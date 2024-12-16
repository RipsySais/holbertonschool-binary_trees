#include "binary_trees.h"

/**
 * binary_tree_inorder - parcourt un arbre binaire en utilisant
 * une traversée dans l'ordre
 * @tree: pointeur vers le noeud racine de l'arbre à parcourir
 * @func: pointeur vers une fonction à appeler pour chaque noeud
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
