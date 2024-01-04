#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: a pointer to the node to measure the depth
 * Return: return 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t tree_depth = 0;

	if (tree == NULL)
		return (0);
	if (tree->parent != NULL)
		tree_depth = 1 + binary_tree_depth(tree->parent);
	return (tree_depth);
}

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

/**
 * binary_tree_get_leaf - finds the leaf of a binary tree
 * @tree: ptr to root of tree
 * Return: ptr to leaf node
 */
const binary_tree_t *binary_tree_get_leaf(const binary_tree_t *tree)
{
	if (binary_tree_is_leaf(tree))
		return (tree);

	if (tree->left)
		return (binary_tree_get_leaf(tree->left));
	else
		return (binary_tree_get_leaf(tree->right));
}

/**
 * is_perfect_recursion - checks a binary tree using recursion
 * @tree: ptr to root of a tree
 * @lvl: level of ongoing node
 * Return: 1 or 0
 */
int is_perfect_recursion(const binary_tree_t *tree, size_t leaf_d, size_t lvl)
{
	if (binary_tree_is_leaf(tree))
	{
		if (leaf_d == lvl)
			return (1);
		else
			return (0);
	}

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursion(tree->left, leaf_d, lvl + 1) &&
			is_perfect_recursion(tree->right, leaf_d, lvl + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: ptr to root node of a tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (is_perfect_recursion(tree,
				binary_tree_depth(binary_tree_get_leaf(tree)), 0));
}
