#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert node as left-child of another node
 * @parent: parent node
 * @value: value
 * Return: Pointer to node inserted
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
