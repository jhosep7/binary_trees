#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_levelorder - goes through a tree using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: Nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height, x;

	x = 0;

	if (!tree || !func)
		return;

	height = binary_tree_height(tree);
	while (x <= height + 1)
	{
		levelorder(tree, x, func);
		x++;
	}

}
/**
 * levelorder - recursively perform a function on a binary tree that
 * visit every node on a level before going to a lower level
 * @tree: pointer
 * @x: index
 * @func: pointer
 */
void levelorder(const binary_tree_t *tree, size_t x, void(*func)(int))
{
	if (x == 1)
		func(tree->n);
	if (x > 1)
	{
		levelorder(tree->left, x - 1, func);
		levelorder(tree->right, x - 1, func);
	}
	else
		return;
}
