#include <stdio.h>
#include "binary_trees.h"

/**
 * _height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 * Return: Height of the tree, 0 if NULL
 */
static size_t _height(const binary_tree_t *tree)
{
    size_t left_height, right_height;

    if (tree == NULL)
        return (0);

    left_height = _height(tree->left);
    right_height = _height(tree->right);

    return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_print - Prints the binary tree nodes (simplified)
 * @tree: Pointer to the root node of the tree
 */
void binary_tree_print(const binary_tree_t *tree)
{
    if (tree == NULL)
        return;

    (void)_height(tree);  /* Use _height to avoid unused-function warning */

    printf("%d\n", tree->n);
    binary_tree_print(tree->left);
    binary_tree_print(tree->right);
}
