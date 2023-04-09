#include "binary_trees.h"
#include "14-binary_tree_balance.c"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Leaves are balanced */
	if (!tree->left && !tree->right)
		return (1);

	/* Node has both children */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	/* Node does not have both children */
	return (0);
}
