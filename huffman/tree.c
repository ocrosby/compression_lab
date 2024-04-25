#include <stdlib.h>

#include "tree.h"

/*
 * This function creates a new node with the given data and frequency.
 */
Node *create_node(char data, unsigned freq) {
    Node *node = (Node *) malloc(sizeof(Node));
    node->data = data;
    node->freq = freq;
    node->left = NULL;
    node->right = NULL;

    return node;
}


/*
 * This function destroys the given node.
 */
void destroy_node(Node *node) {
    free(node);
}

/*
 * This function merges two nodes into a new node.
 */
Node *merge_nodes(Node *left, Node *right) {
    Node *node = create_node('\0', left->freq + right->freq);
    node->left = left;
    node->right = right;

    return node;
}

/*
 * This function destroys the tree rooted at the given node.
 */
void destroy_tree(Node *node) {
    if (node == NULL) {
        return;
    }

    destroy_tree(node->left);
    destroy_tree(node->right);
    destroy_node(node);
}

// Path: tree.c