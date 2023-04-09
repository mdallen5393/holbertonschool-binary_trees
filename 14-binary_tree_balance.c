#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_balance - function that measures the balance factor of a binary
 * tree.
 *
 * @tree: pointer to the root node fo the tree to measure the balance factor
 * Return: integer balance factor, or 0 on error
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;
	if (!tree)
		return (0);

	if (tree->left)
		left_height = binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
