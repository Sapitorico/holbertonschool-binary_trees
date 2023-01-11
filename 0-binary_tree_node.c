#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a new node
 *
 * @parent: father node
 * @value: element of the node
 * Return: Null in case of failure or the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *New_Node = NULL;

	New_Node = malloc(sizeof(binary_tree_t));
	if (!New_Node)
		return (NULL);
	New_Node->parent = parent;
	New_Node->n = value;
	New_Node->left = NULL;
	New_Node->right = NULL;
	return (New_Node);
}
