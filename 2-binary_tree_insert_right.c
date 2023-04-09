#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right child
 * of another node.  If parent already has a right-child, new node must take
 * its place, and the old right-child must be set as the right child of the new
 * node.
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 * Return: pointer to the create node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (!parent)
		return (NULL);

	temp = parent->right;

	parent->right = binary_tree_node(parent, value);
	if (!parent->right) /* malloc failed */
		return (NULL);

	parent->right->right = temp;
	if (temp)
		temp->parent = parent->right;
	return (parent->right);
}
