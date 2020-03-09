#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: Parent Node
 * @value: Node Value
 * Return: Pointer or null
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *NewND;

	NewND = malloc(sizeof(binary_tree_t));
	if (!NewND)
	{return (NULL); }

	NewND->parent = parent;
	NewND->n = value;
	NewND->left = NULL;
	NewND->right = NULL;

	return (NewND);
}
