#include "binary_trees.h"

/**
 * recursive_left - walk the tree, left first
 * @node: node to check
 * @func: function pointer to call for each node
 * Return: void
 */
void recursive_left(const binary_tree_t *node, void (*func)(int))
{
	if (node->left != NULL)
		recursive_left(node->left, func);
	if (node->right != NULL)
		recursive_left(node->right, func);
	func(node->n);
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

	recursive_left(position, func);
}
