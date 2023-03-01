#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if
 * given node is a root
 * @node: pointer to the node to check
 * Return: 1 if node is root, o otherwise
 * if node is null, ret 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
