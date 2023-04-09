#include "binary_trees.h"
#include "4-binary_tree_is_leaf.c"

/**
 * binary_tree_nodes - function that counts the nodes with at least one child
 * in a binary tree.
 *
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least one children, or 0 on error
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0;

	if (!tree || binary_tree_is_leaf(tree))
		return (0);

	if (tree->left)
		left_nodes = binary_tree_nodes(tree->left);

	if (tree->right)
		right_nodes = binary_tree_nodes(tree->right);

	return (1 + left_nodes + right_nodes);
}
