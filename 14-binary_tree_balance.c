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
	else if (node->right != NULL)
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

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		left++;
		recursive_balance(tree->left, &left);
	}

	if (tree->right != NULL)
	{
		right++;
		recursive_balance(tree->right, &right);
	}
	return (left - right);
}
