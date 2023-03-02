#include "binary_trees.h"

/**
 * binary_tree_sibling - found the sibling of a given node
 * @node: a pointer to a given node
 *
 * Return: a pointer to sibling of a node, null otherwise
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *s;

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		s = node->parent->right;
	if (node->parent->right == node)
		s = node->parent->left;
	return (s);
}
