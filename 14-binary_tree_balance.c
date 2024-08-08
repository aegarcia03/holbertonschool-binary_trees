#include "binary_trees.h"

/**
 * recursive_balance - balance recursively
 * @node: node
 * @count: pointer to counter
 * Return: void
 */
void recursive_balance(const binary_tree_t *node, int *count)
{
	if (node->left != NULL)
	{
		(*count)++;
		recursive_balance(node->left, count);
	}
	if (node->right != NULL)
	{
		(*count)++;
		recursive_balance(node->right, count);
	}
}

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
		recursive_balance(node->left, &left);
	}

	node = tree;
	while (node->right != NULL)
	{
		right++;
		recursive_balance(node->right, &right);
	}
	return (left - right);
}
