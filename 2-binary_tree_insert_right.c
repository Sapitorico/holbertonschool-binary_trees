#include "binary_trees.h"
#include "0-binary_tree_node.c"

/**
 * binary_tree_insert_right - adds a new node to the right of the tree
 *
 * @parent: father node
 * @value: value
 * Return: The new node or null in case of fault
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *New_Node = NULL;

	if (!parent)
		return (NULL);
	New_Node = binary_tree_node(parent, value);
	if (!New_Node)
		return (NULL);
	if (parent->right)
	{
		New_Node->right = parent->right;
		parent->right->parent = New_Node;
	}
	parent->right = New_Node;
	return (New_Node);
}
