#include "binary_trees.h"
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: pointer to the lowest common ancestor node of the two given nodes
 * or NULL If no common ancestor was found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t
				     *first, const binary_tree_t *second)
{
	binary_tree_t *tmp;

	if (first == NULL && second == NULL)
		return (NULL);

	tmp = (binary_tree_t *)first;
	while (second)
	{
		while (first)
		{
			if (second == first)
				return ((binary_tree_t *)second);
			first = first->parent;
		}
		second = second->parent;
		first = tmp;
	}
	return (NULL);
}
