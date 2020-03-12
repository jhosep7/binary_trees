#include "binary_trees.h"
#include "17-binary_tree_sibling.c"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: Node
 * Return: structure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
	{return (NULL); }
	return (binary_tree_sibling(node->parent));
}
