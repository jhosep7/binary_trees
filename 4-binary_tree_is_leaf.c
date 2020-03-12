#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
	{return (0); }
	return (!node->left && !node->right);
}
