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

	if (tree == NULL)
		return (0);
	lh = binary_tree_height(tree->left);
	rh = binary_tree_height(tree->right);

	return (max(lh, rh) + 1);
}

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree: pointer to root node of tree to measure bal. factor
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
