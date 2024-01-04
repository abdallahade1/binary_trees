#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node where right child inserted
 * @value: value of the right child node inserted
 * Return: a pointer to the created node.
 *		else return NULL if error occurs or parent fails
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
