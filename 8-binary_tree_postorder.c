#include "binary_trees.h"
/**
 * binary_tree_postorder - to access a tree through postorder
 * @tree: pointer to a tree
 * @func: pointer to a function
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
