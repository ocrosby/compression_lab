typedef struct node {
    char data;
    unsigned freq;
    struct node *left;
    struct node *right;
} Node;

Node *create_node(char data, unsigned freq);
void destroy_node(Node *node);
Node *merge_nodes(Node *left, Node *right);
void destroy_tree(Node *node);

// Path: tree.h