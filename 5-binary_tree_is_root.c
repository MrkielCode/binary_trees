#include "binary_trees.h"
/**
 * binary_tree_is_root - To check if node is root
 * @node: node to be checked
 * Return: 1 if a node is a root
 * or 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	{
		return (1);
	}
	return (0);
}
