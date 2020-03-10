#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: tree.
 * Return: int
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int Leaves;

	if (!tree)
	{return (0); }
	if (!(tree->left) && !(tree->right))
	{return (1); }
	Leaves = binary_tree_leaves(tree->right) +
		binary_tree_leaves(tree->left);
	return (Leaves);
}
