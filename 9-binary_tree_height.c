#include "binary_trees.h"

/**
 * max - returns max height btn 2 inputs
 * @a: first input
 * @b: second input
 * Return: max btn the two
 */
size_t max(size_t a, size_t b)
{
	if (a > b)
		return (a);
	return (b);
}

/**
 * binary_tree_height - function that measures the height
 * of a binary tree
 * @tree: pointer to the root node of the tree to
 * measure the height
 * Return: 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lh, rh;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (max(lh, rh) + 1);
}
