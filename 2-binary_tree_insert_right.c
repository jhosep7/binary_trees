#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts node as right-child.
 * @parent: Parent
 * @value: n
 * Return: Always 0 (Success)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *Rchild;

	if (!parent)
	{return (NULL); }
	Rchild = malloc(sizeof(binary_tree_t));
	if (!Rchild)
	{return (NULL); }

	Rchild->n = value;
	Rchild->parent = parent;
	Rchild->left = NULL;
	Rchild->right = NULL;

	if (parent->right)
	{
		Rchild->right = parent->right;
		parent->right->parent = Rchild;
		parent->right = Rchild;
	}
	else
	{parent->right = Rchild; }

	return (Rchild);
}
