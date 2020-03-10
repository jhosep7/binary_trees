#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Node
 * Return: structure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *Uncle;

	if (!(node->parent) || !node || !(node->parent->parent))
	{return (NULL); }
	Uncle = node->parent;
	if (Uncle->parent->right != Uncle && Uncle->parent)
	{return (Uncle->parent->right); }
	if (Uncle->parent->left != Uncle && Uncle->parent)
	{return (Uncle->parent->left); }
	return (NULL);
}
