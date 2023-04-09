#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: integer number of leaves in the tree, or 0 on error
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves = 0, right_leaves = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left)
		left_leaves = binary_tree_leaves(tree->left);
	if (tree->right)
		right_leaves = binary_tree_leaves(tree->right);

	return (left_leaves + right_leaves);
}
