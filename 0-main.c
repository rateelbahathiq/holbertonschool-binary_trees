#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *node;

    node = binary_tree_node(NULL, 10);
    if (node == NULL)
    {
        printf("Failed to create node\n");
        return 1;
    }

    printf("Node created with value: %d\n", node->n);

    /* free memory */
    free(node);

    return 0;
}
