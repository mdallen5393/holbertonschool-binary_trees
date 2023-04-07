#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 *
 * @parent: pointer to the parent node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(*newNode));
	if (!newNode)
		return (NULL);

	newNode->parent = parent;
	newNode->n = value;

	return (newNode);
}
