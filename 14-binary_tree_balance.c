#include "binary_trees.h"

/**
 * binary_tree_balance - measure the balance of a binary tree
 * @tree: root node of tree to measure
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;
	const binary_tree_t *node;

	if (tree == NULL)
		return (0);

	node = tree;
	while (node->left != NULL)
	{
		left++;
		node = node->left;
	}

	node = tree;
	while (node->right != NULL)
	{
		right++;
		node = node->right;
	}
	return (left - right);
}
