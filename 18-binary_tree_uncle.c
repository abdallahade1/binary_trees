#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: return NULL if node is NULL or
 *		node has no uncle
 *		else return pointer the uncle node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	binary_tree_t *parent_of_parent = node->parent->parent;

	if (parent_of_parent == NULL)
		return (NULL);
	if (parent_of_parent->left == node->parent)
		return (parent_of_parent->right);
	return (parent_of_parent->left);
}
