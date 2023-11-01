#include "binary_trees.h"

/**
 * binary_tree_depth - checking the depth of a tree
 * @tree: pointer to the tree
 * Return: 0 or 1
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		(return 1 + binary_tree_depth(tree->parent));
	}

	return (0);
}
