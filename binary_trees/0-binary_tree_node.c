#include "binary_trees.h"

/**
 * binary_tree_node - a function that creats a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in new node
 * Return: return new node or NULL on fail
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
