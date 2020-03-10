#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - measures the balance factor
 * @tree: tree
 * Return: int
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int Balance, LeftHeight, RightHeight;

	if (!tree)
	{return (0); }

	if (tree->left)
	{LeftHeight = binary_tree_height(tree->left) + 1; }
	else
	{LeftHeight = binary_tree_height(tree->left) + 0; }

	if (tree->right)
	{RightHeight = binary_tree_height(tree->right) + 1; }
	else
	{RightHeight = binary_tree_height(tree->right) + 0; }

	Balance = LeftHeight - RightHeight;
	return (Balance);
}
