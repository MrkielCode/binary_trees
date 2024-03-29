#include "binary_trees.h"

/**
 * binary_tree_sibling - to check if a node has a sibling
 * @node: is a child of parent
 * Return: NULL or siblings
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == node)
	{
		return (parent->right);
	}
	else
	{
		return (parent->left);
	}
}
