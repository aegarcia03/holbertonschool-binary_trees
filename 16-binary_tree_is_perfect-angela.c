#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * find_depth - helper function to find the depth
 * @tree: pointer of the tree
 *
 * Return: depth
 */
int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree != NULL)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}
/**
 * isperfect - helper function that checks if the binary tree is perfect
 * @tree: pointer to a tree
 * @d: depth of a tree
 * @level: level of a tree
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int isperfect(const binary_tree_t *tree, int d, int level)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		d = level;
		return (d + 1);
	}
	if (tree->left == NULL || tree->right == NULL)
	{
		return (0);
	}
	return ((isperfect(tree->left, d, level + 1)) &&
			(isperfect(tree->right, d, level + 1)));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to a tree
 *
 * Return: 0 If tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d;

	d = find_depth(tree);

	if (tree == NULL)
		return (0);
	else
		return (isperfect(tree, d, 0));
}
