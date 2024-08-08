#include "binary_trees.h"

/**
 * binary_tree_is_root - check if given node is root
 * @node: node to check
 * Return: true or false
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent != NULL)
		return (0);
	return (1);
}
