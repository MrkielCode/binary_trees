#include "binary_trees.h"
/**
 * binary_tree_delete - to free tree memory
 * @tree: binary tree to be free
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
