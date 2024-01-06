#include "binary_trees.h"
/**
 * binary_tree_delete - this function deletes the binary tree
 * @tree: the tree to delete
 */
void binary_tre_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
