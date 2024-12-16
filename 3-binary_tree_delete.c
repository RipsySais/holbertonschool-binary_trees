#include "binary_trees.h"

/**
 * binary_tree_delete - supprime un arbre binaire entier
 * @tree: pointeur vers le noeud racine de l'arbre à supprimer
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
