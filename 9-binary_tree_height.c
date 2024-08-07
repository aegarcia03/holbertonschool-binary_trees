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
	{
		l = binary_tree_height(tree->left) + 1;
	}
	if (tree->right)
	{
		r = binary_tree_height(tree->right) + 1;
	}

	if (l > r)
		return (l);
	else
		return (r);
}
