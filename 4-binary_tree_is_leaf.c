#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if the node is a sheet
 *
 * @node: Node
 * Return: 1 if it is a sheet but 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
