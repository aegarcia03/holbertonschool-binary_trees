#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_depht -  measures the height of a binary tree
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
                return (0);

        if (tree->left == NULL && tree->right == NULL)
        {
                d = level;
                return (d + 1);
        }
        if (tree->left == NULL || tree->right == NULL)
                return (0);

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
	d = binary_tree_height(tree);

	if (tree == NULL)
		return (0);
	else
		return (isperfect(tree, d, 0));
}
