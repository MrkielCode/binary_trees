#include "binary_trees.h"
/**
 * tree_height - calculate the height of a sub-tree
 * @tree: pointer to the tree
 * Return: 0 on fail or height of subtree
 */

int tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
/**
 * binary_tree_balance - to check if the tree is balance
 * @tree: pointer to the tree
 * Return: 0 on fail or balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int left_height, right_height;

	left_height = tree_height(tree->left);
	right_height = tree_height(tree->right);
	return (left_height - right_height);
}
