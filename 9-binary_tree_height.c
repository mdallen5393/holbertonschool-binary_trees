#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_height - function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height
 * Return: integer height of the tree, or 0 on error
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}
