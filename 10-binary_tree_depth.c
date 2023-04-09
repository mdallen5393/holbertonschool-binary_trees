#include "binary_trees.h"
#include "5-binary_tree_is_root.c"

/**
 * binary_tree_depth - function that measures the depth of a binary tree.
 *
 * @tree: pointer to the node to measure the depth
 * Return: integer depth of the node, or 0 on error
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree || binary_tree_is_root(tree))
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
