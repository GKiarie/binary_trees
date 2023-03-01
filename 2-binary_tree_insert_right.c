#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts
 * a node as the right child of another node
 * @parent: pointer to the node to insert right child in
 * @value: value to store in new node
 * Return: pointer to created node, NULL om failure
 * Null if parent is NULL
 * New node must take place of existing right child
 * oldNode must be rightChild of new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *oldNode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->right == NULL)
	{
		parent->right = binary_tree_node(parent, value);
	}
	else
	{
		oldNode = parent->right;
		parent->right = binary_tree_node(parent, value);
		parent->right->right = oldNode;
		oldNode->parent = parent->right;
	}
	return (parent->right);
}
