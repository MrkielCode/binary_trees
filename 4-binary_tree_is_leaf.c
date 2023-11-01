#include "binary_trees.h"
/**
 * binary_tree_is_leaf - To check if a node is a leaf
 * @node: node to be checked
 * Return: 1 is node is not a leaf or
 * 0 if it is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
