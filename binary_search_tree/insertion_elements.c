#include <stdio.h>
#include <stdlib.h>

// A node of the binary search tree
struct node {
    int data;
    struct node* left;
    struct node* right;
};

// Function to create a new node with the given data
struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a node into the binary search tree
struct node* insert(struct node* root, int data) {
    // If the tree is empty, return a new node
    if (root == NULL) {
        return createNode(data);
    }

    // Otherwise, recur down the tree
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    // Return the (unchanged) node pointer
    return root;
}

// Function to print the inorder traversal of the binary search tree
void inorderTraversal(struct node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Main function to test the implementation
int main() {
    struct node* root = NULL;

    // Take user input for the number of elements to insert
    int n;
    printf("Enter the number of elements to insert: ");
    scanf("%d", &n);

    // Take user input for the elements to insert
    int data;
    printf("Enter the elements to insert: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    // Print the inorder traversal of the binary search tree
    printf("Inorder traversal of the binary search tree: ");
    inorderTraversal(root);

    return 0;
}
