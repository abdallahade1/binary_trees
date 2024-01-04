#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least 1 child
 * @tree: ptr to root of tree
 * Return: nodes1 or 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes1 = 0;

	if (tree)
	{
		if (tree->left != NULL || tree->right != NULL)
			nodes1 += 1;
		nodes1 += binary_tree_nodes(tree->left);
		nodes1 +=  binary_tree_nodes(tree->right);
	}
	return (nodes1);
}
