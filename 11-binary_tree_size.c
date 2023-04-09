#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 *
 * @tree: pointer to the root node fo the tree to measure the size
 * Return: integer size of the tree, or 0 on error
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size = 0, right_size = 0;

	if (!tree)
		return (0);

	if (binary_tree_is_leaf(tree))
		return (1);

	if (tree->left)
		left_size = binary_tree_size(tree->left);
	if (tree->right)
		right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
