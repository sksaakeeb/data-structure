#include <stdio.h>
#include <stdlib.h>

// Define a node structure for the binary search tree
typedef struct node {
    int data;
    struct node* left;
    struct node* right;
} node;

// Function to create a new node with the given data
node* new_node(int data) {
    node* new_node = (node*)malloc(sizeof(node));
    new_node->data = data;
    new_node->left = NULL;
    new_node->right = NULL;
    return new_node;
}

// Function to insert a new node into the binary search tree
node* insert(node* root, int data) {
    if (root == NULL) {
        return new_node(data);
    } else if (data < root->data) {
        root->left = insert(root->left, data);
    } else {
        root->right = insert(root->right, data);
    }
    return root;
}

// Function to search for a value in the binary search tree
node* search(node* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    } else if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

int main() {
    node* root = NULL;
    int num, search_val;

    // Ask the user to input values to insert into the binary search tree
    printf("Enter the number of values to insert: ");
    scanf("%d", &num);
    printf("Enter %d values:\n", num);
    for (int i = 0; i < num; i++) {
        int val;
        scanf("%d", &val);
        root = insert(root, val);
    }

    // Ask the user to input a value to search for
    printf("Enter a value to search for: ");
    scanf("%d", &search_val);

    // Search for the value in the binary search tree
    node* result = search(root, search_val);
    if (result == NULL) {
        printf("%d not found in the tree\n", search_val);
    } else {
        printf("%d found in the tree\n", search_val);
    }
    
    return 0;
}
