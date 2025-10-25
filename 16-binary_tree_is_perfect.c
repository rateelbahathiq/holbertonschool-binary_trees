#include "binary_trees.h"

/**
 * find_depth - Finds depth of the leftmost leaf
 * @tree: Pointer to root node
 *
 * Return: Depth (levels)
 */
int find_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_perfect - Recursively checks if a tree is perfect
 * @tree: Pointer to node
 * @depth: Expected depth for all leaves
 * @level: Current level in the tree
 *
 * Return: 1 if perfect, 0 otherwise
 */
int is_perfect(const binary_tree_t *tree, int depth, int level)
{
	if (tree == NULL)
		return (1); /* Null subtree is considered perfect */

	/* If leaf node, check if depth is correct */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level + 1);

	/* If node has only one child, it's not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* Check left and right subtrees */
	return (is_perfect(tree->left, depth, level + 1) &&
	        is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (tree == NULL)
		return (0);

	depth = find_depth(tree);
	return (is_perfect(tree, depth, 0));
}
