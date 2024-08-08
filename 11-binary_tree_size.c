#include "binary_trees.h"

/**
 * recursive_count - count nodes recursively
 * @node: node to count
 * @count: address of the counter
 * Return: void
 */
void recursive_count(const binary_tree_t *node, size_t *count)
{
	if (node->left != NULL)
		recursive_count(node->left, count);
	if (node->right != NULL)
		recursive_count(node->right, count);
	count++;
}

/**
 * binary_tree_size - measure the size of a binary tree
 * @tree: Root node of tree to measure
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);
	recursive_count(tree, &size);
	return (size);
}
