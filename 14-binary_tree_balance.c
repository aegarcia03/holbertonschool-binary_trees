#include "binary_trees.h"

/**
 * recursive_balance - balance recursively
 * @node: node
 * @left: pointer to left counter
 * @right: pointer to right counter
 * Return: void
 */
void recursive_balance(const binary_tree_t *node, int *left, int *right)
{
	if (node->left != NULL)
	{
		(*left)++;
		recursive_balance(node->left, left, right);
	}
	if (node->right != NULL)
	{
		(*right)++;
		recursive_balance(node->right, left, right);
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

	if (tree == NULL)
		return (0);
	recursive_balance(tree, &left, &right);
	return (left - right);
}
