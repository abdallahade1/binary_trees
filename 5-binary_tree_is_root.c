#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if the node is root
 * @node: ptr to node
 * Return: 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node != NULL && node->parent == NULL)
		return (1);
	return (0);
}
