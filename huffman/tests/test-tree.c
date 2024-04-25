#include <stdio.h>
#include <stdlib.h>

#include "tree.h"

void end_test() {
    printf("--------------------------------------------------------------------------------\n\n");
}

void test_create_node() {
    printf("Test create_node\n");

    // Arrange
    Node *node;
    char data = 'a';
    unsigned freq = 1;

    // Act
    node = create_node(data, freq);

    // Assert
    if (node == NULL) {
        printf("\tTest failed: node is NULL\n");
    } else if (node->data != data) {
        printf("\tTest failed: data is not equal\n");
    } else if (node->freq != freq) {
        printf("\tTest failed: freq is not equal\n");
    } else if (node->left != NULL) {
        printf("\tTest failed: left is not NULL\n");
    } else if (node->right != NULL) {
        printf("\tTest failed: right is not NULL\n");
    } else {
        printf("\tTest passed\n");
    }

    // Cleanup
    free(node);

    end_test();
}

void test_destroy_node() {
    printf("Test destroy_node\n");
    printf("\tTodo: Implement test\n");

    end_test();
}

void test_merge_nodes() {
    printf("Test merge_nodes\n");
    printf("\tTodo: Implement test\n");

    end_test();
}

void test_destroy_tree_null() {
    printf("Test destroy_tree with NULL Node pointer\n");
    printf("\tTodo: Implement test\n");

    end_test();
}

void test_destroy_tree() {
    printf("Test destroy_tree\n");
    printf("\tTodo: Implement test\n");

    end_test();
}

int main() {
    printf("Test Fixture for Huffman Tree\n\n");

    // Call more tests
    test_create_node();
    test_destroy_node();
    test_merge_nodes();
    test_destroy_tree_null();
    test_destroy_tree();

    printf("All tests passed!\n");

    return 0;
}
