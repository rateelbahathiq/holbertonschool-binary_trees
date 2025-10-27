#🌳 Binary Trees Project

This project implements various binary tree operations and algorithms in C. It covers fundamental concepts such as creation, traversal, and analysis of binary tree properties.

📘 Description

A binary tree is a hierarchical data structure where each node has at most two children — referred to as the left child and right child.
This project provides a comprehensive set of functions for creating, traversing, and analyzing binary trees.

🧱 Data Structure
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};
typedef struct binary_tree_s binary_tree_t;

📂 Files Overview
File Description
binary_trees.h Header file containing function prototypes and structure definitions
0-binary_tree_node.c Creates a binary tree node
1-binary_tree_insert_left.c Inserts a node as the left child of another node
2-binary_tree_insert_right.c Inserts a node as the right child of another node
3-binary_tree_delete.c Deletes an entire binary tree
4-binary_tree_is_leaf.c Checks if a node is a leaf
5-binary_tree_is_root.c Checks if a node is a root
6-binary_tree_preorder.c Pre-order traversal of a binary tree
7-binary_tree_inorder.c In-order traversal of a binary tree
8-binary_tree_postorder.c Post-order traversal of a binary tree
9-binary_tree_height.c Measures the height of a binary tree
10-binary_tree_depth.c Measures the depth of a node in a binary tree
11-binary_tree_size.c Measures the size of a binary tree
12-binary_tree_leaves.c Counts the leaves in a binary tree
13-binary_tree_nodes.c Counts the nodes with at least one child
14-binary_tree_balance.c Measures the balance factor of a binary tree
15-binary_tree_is_full.c Checks if a binary tree is full
16-binary_tree_is_perfect.c Checks if a binary tree is perfect
17-binary_tree_sibling.c Finds the sibling of a node
18-binary_tree_uncle.c Finds the uncle of a node
binary_tree_print.c Helper function to print binary trees
⚙️ Function Prototypes
🔹 Basic Operations
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);

🔹 Tree Analysis
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
size_t binary_tree_height(const binary_tree_t *tree);
size_t binary_tree_depth(const binary_tree_t *tree);
size_t binary_tree_size(const binary_tree_t *tree);
size_t binary_tree_leaves(const binary_tree_t *tree);
size_t binary_tree_nodes(const binary_tree_t *tree);

🔹 Tree Traversal
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));

🔹 Tree Properties
int binary_tree_balance(const binary_tree_t *tree);
int binary_tree_is_full(const binary_tree_t *tree);
int binary_tree_is_perfect(const binary_tree_t *tree);

🔹 Node Relations
binary_tree_t *binary_tree_sibling(binary_tree_t *node);
binary_tree_t *binary_tree_uncle(binary_tree_t *node);

🌲 Key Concepts
🌟 Tree Terminology

Root: The top node of the tree

Leaf: A node with no children

Height: The longest path from the node to a leaf

Depth: The distance from the root to the node

Balance Factor: The difference between the heights of left and right subtrees

🌟 Tree Types

Full Binary Tree: Every node has either 0 or 2 children

Perfect Binary Tree: All internal nodes have two children, and all leaves are at the same level

Balanced Binary Tree: The height difference between left and right subtrees is at most 1

🌟 Traversal Methods

Pre-order: Root → Left → Right

In-order: Left → Root → Right

Post-order: Left → Right → Root

💻 Example Usage
#include "binary_trees.h"
#include <stdio.h>

int main(void)
{
    binary_tree_t *root;

    root = binary_tree_node(NULL, 98);
    root->left = binary_tree_node(root, 12);
    root->right = binary_tree_node(root, 402);

    printf("Size: %lu\n", binary_tree_size(root));
    printf("Height: %lu\n", binary_tree_height(root));
    printf("Is full: %d\n", binary_tree_is_full(root));

    binary_tree_delete(root);
    return (0);
}

🧹 Memory Management

All functions that allocate memory use malloc() with proper error checking.
Use binary_tree_delete() to free all allocated memory and prevent leaks.

👥 Authors

This project is part of the Holberton School curriculum on data structures and algorithms.

Team Members:

Thekra Alhenaki (thekra-alh)

Rateel Bahathiq (rateelbahathiq
)

📜 License

This project is intended for educational purposes as part of the Holberton School curriculum.i
