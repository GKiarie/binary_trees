#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts
 * a node as the left child of another node
 * @parent: pointer to the node to insert left child in
 * @value: value to store in new node
 * Return: pointer to created node, NULL om failure
 * Null if parent is NULL
 * New node must take place of existing left child
 * oldNode must be leftChild of new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *oldNode = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		oldNode = parent->left;
		parent->left = binary_tree_node(parent, value);
		parent->left->left = oldNode;
		oldNode->parent = parent->left;
	}
	return (parent->left);
}
