#include "binary_trees.h"
/**
 * binary_tree_is_full - to check is tree is full
 * @tree: pointer to a root
 * Return: 0 or 1
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		return (1);
	}

	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
