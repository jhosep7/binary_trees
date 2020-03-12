#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: node
 * Return: int
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!(node->left) && !(node->right) && node)
	{return (1); }
	return (0);
}
