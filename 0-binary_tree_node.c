#include "binary_trees.h"
/**
 * binary_tree_node - create a binary tree
 * @parent: parent node of the tree
 * @value: value to be inserted
 * Return: Null or a new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
