#include "binary_trees.h"
/**
 * binary_tree_height - to check the height of a tree
 * @tree: pointer to the tree
 * Return: size or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (tree == NULL)
		return (0);
	right_height = tree->left ? 1 +  binary_tree_height(tree->left) : 0;
	left_height = tree->right ? 1 +  binary_tree_height(tree->right) : 0;
	return ((left_height > right_height) ? left_height : right_height);
}
