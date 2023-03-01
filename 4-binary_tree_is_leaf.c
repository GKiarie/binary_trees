#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node
 * is a leaf
 * @node: pointer to the node to check
 * Return: 1 if node is leaf, else 0
 * if node is null, ret 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == 0 && node->right == 0)
		return (1);
	else
		return (0);
}
