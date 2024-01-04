#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: a pointer to the node to check
 * Return: return 0 if node is not a leaf
 *		or if node is NULL
 *		else return 1
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if ((node->left == NULL) && (node->right == NULL))
		return (1);
	return (0);
}
