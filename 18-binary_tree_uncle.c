#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - check if a given node has an uncle
 * @node: a pointer to the given node
 *
 * Return: a pointer to the uncle, NULL otherwise
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}
