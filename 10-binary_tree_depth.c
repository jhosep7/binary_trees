#include "binary_trees.h"

/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: tree
 * Return:  int
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	int Depth = 0;

	if (!tree)
	{return (0); }
	while (tree && tree->parent)
	{
		tree = tree->parent;
		Depth++;
	}
	return (Depth);
}
