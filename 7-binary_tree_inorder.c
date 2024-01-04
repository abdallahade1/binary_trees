#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through binary tree inorder traversal
 * @tree: ptr to binray tree
 * @func: ptr to a function that callls for each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
