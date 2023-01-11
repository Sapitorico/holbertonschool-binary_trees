#include "binary_trees.h"

/**
 * binary_tree_is_root -  function that checks if a given node is a root
 *
 * @node: node
 * Return: 1 If it's root otherwise 0 
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}