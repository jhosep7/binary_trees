#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: My tree
 * Return: Always 0 (Success)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t i = 0, Node = 1;

	if (!tree)
	{return (0); }

	while (i <= binary_tree_height(tree))
	{
		Node *= 2;
		i++;
	}
	return (binary_tree_size(tree) + 1 == Node);
}
