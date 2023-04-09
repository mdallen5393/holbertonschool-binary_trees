#include "binary_trees.h"
#include "9-binary_tree_height.c"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 *
 * @tree: poniter to the root node of the tree to check
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (tree->left && tree->right)
		return (binary_tree_is_perfect(tree->left)
				&& binary_tree_is_perfect(tree->right)
				&& left_height == right_height);

	return (0);
}
