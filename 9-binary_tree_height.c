#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: ptr to root of tree
 * Return: height or 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft, rght;

	if (tree)
	{
		lft = 0;
		rght = 0;

		if (tree->left)
			lft = 1 + binary_tree_height(tree->left);

		if (tree->right)
			rght = 1 + binary_tree_height(tree->right);

		return ((lft > rght) ? lft : rght);
	}
	return (0);
}
