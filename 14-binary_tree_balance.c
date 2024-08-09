#include "binary_trees.h"
/**
 * binary_tree_height -  measures the height of a binary tree
 * @tree: pointer to the root of the tree.
 *
 * Return: height of the tree
 * If tree is NULL, return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		l = binary_tree_height(tree->left);
	if (tree->right)
		r = binary_tree_height(tree->right);


	return ((l > r ? l : r) + 1);
}
/**
 * binary_tree_balance - measure the balance of a binary tree
 * @tree: root node of tree to measure
 * Return: balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
