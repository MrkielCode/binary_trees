#include "binary_trees.h"
/**
 * is_perfect - to check if a leaf is perfect
 * @tree: pointer to a root
 * @level: track level of a tree
 * @leaf_level: to track the depth of a tree
 * Return: 0 or 1
 */

int is_perfect(const binary_tree_t *tree, int level, int *leaf_level)
{
	if (tree == NULL)
	{
		if (*leaf_level == -1)
		{
			*leaf_level = level;
		} else if (level != *leaf_level)
		{
			return (0);
		}
		return (1);
	}
	if ((tree->left == NULL && tree->right != NULL) ||
			(tree->left != NULL && tree->right == NULL))
		return (0);

	return (is_perfect(tree->left, level + 1, leaf_level)
			&& is_perfect(tree->right, level + 1, leaf_level));
}
/**
 * binary_tree_is_perfect - to check perfect binary tree
 * @tree: pointer to a tree
 * Return: 0 or 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int leaf_level = -1;

	if (tree == NULL)
	{
		return (0);
	}

	return (is_perfect(tree, 0, &leaf_level));
}
