#include "binary_trees.h"

/**
 * binary_tree_insert_left - adds a new node to the left of the tree
 *
 * @parent: father node
 * @value: value
 * Return: The new node or null in case of fault
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *New_Node = NULL;

	if (!parent)
		return (NULL);
	New_Node = binary_tree_node(parent, value);
	if (!New_Node)
		return (NULL);

	if (parent->left)
	{
		New_Node->left = parent->left;
		parent->left->parent = New_Node;
	}
	parent->left = New_Node;
	return (New_Node);
}
