#include <stdio.h>
#include "binary_trees.h"

/* A simple print function to visualize the binary tree */

void binary_tree_print(const binary_tree_t *tree)
{
    if (!tree)
        return;

    if (tree->right)
    {
        printf("    ");
        binary_tree_print(tree->right);
    }

    printf("%d\n", tree->n);

    if (tree->left)
    {
        printf("    ");
        binary_tree_print(tree->left);
    }
}
