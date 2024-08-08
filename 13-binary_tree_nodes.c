#include "binary_trees.h"

/**
 * recursively_count_nodes - count nodes
 * @node: node to count if it has children
 * @count: address of counter to track
 * Return: void
 */
void recursively_count_nodes(const binary_tree_t *node, size_t *count)
{
	if (node->left != NULL || node->right != NULL)
		(*count)++;
	if (node->left != NULL)
		recursively_count_nodes(node->left, count);
	if (node->right != NULL)
		recursively_count_nodes(node->right, count);
}

/**
 * binary_tree_nodes - count nodes with children
 * @tree: root node to count from
 * Return: nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;
	const binary_tree_t *node;

	if (tree == NULL)
		return (count);

	node = tree;
	recursively_count_nodes(node, &count);
	return (count);
}
