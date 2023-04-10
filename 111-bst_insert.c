#include "binary_trees.h"

/**
 * bst_insert - function that inserts a value in a Binary Search Tree. If the
 * address stored in tree is NULL, the created node must become the root node.
 * If the value is already present in the tree, it must be ignored.
 * 
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: the value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
    bst_t *node;

    /* if tree is empty, return new node */
    if (!*tree)
    {
        *tree = binary_tree_node(NULL, value);
        return (*tree);
    }

    node = *tree;
    if (value < node->n)
    {
        if (!node->left)
        {
            node->left = binary_tree_node(node, value);
            return (node->left);
        }
        else
            return (bst_insert(&node->left, value));
    }
    else if (value > node->n)
    {
        if (!node->right)
        {
            node->right = binary_tree_node(node, value);
            return (node->right);
        }
        else
            return (bst_insert(&node->right, value));
    }
    return (NULL);
}