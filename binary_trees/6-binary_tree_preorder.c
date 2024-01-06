#include "binary_trees.h"
/**
 * binary_trr_preorder - this function do transversal
 * @tree: the tree to be transversed
 * @func: the function to print
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
