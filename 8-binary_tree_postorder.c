#include "binary_trees.h"

/**
 * recursive_left - walk the tree, left first
 * @node: node to check
 * Return: value from node
 */
int recursive_left(const binary_tree_t *node)
{
	if (node->left != NULL)
		return (recursive_left(node->left));
	if (node->right != NULL)
		return (recursive_left(node->right));
	return (node->n);
}

/**
 * binary_tree_postorder - go through binary tree using post-order traversal
 * @tree: Root node of tree to traverse town
 * @func: function pointer to call for each node
 * Return: Null
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	const binary_tree_t *position;

	if (tree == NULL || func == NULL)
		return;
	position = tree;

	func(recursive_left(position));
}
