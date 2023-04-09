#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left-child of
 * another node. If parent already has a left-child, the new node must take its
 * place, and the old left-child must be set as the left-child of the new node.
 *
 * @parent: pointer to the node to insert the left child in
 * @value: value to store in the new node
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	temp = parent->left;

	parent->left = binary_tree_node(parent, value);
	if (!parent->left) /* malloc failed */
		return (NULL);

	parent->left->left = temp;
	if (temp)
		temp->parent = parent->left;
	return (parent->left);
}
