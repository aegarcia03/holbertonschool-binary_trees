#include "binary_trees.h"

/**
 * binary_tree_depth - measure depth
 * @tree: node to measure
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *node;

	if (tree == NULL)
		return (depth);
	node = tree;
	while (node->parent != NULL)
	{
		depth++;
		node = node->parent;
	}
	return (depth);
}
