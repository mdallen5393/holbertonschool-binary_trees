#include "binary_trees.h"
#include "10-binary_tree_depth.c"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - function that finds the uncle of a node in a binary tree.
 *
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL on failure
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || binary_tree_depth(node) < 2)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
