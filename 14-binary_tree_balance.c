#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node to measure the balance factor
 *
 * Return: Balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* Reuse your existing height function */
	return (
		(int)binary_tree_height(tree->left)
		- (int)binary_tree_height(tree->right)
	);

}
