#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* createNode(int data) {
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(struct node** head, int data) {
    struct node* newNode = createNode(data);

    if (*head == NULL) {
        *head = newNode;
        return;
    }

    struct node* currNode = *head;

    while (currNode->next != NULL) {
        currNode = currNode->next;
    }

    currNode->next = newNode;
}

void reversePrint(struct node* head) {
    if (head == NULL) {
        return;
    }

    reversePrint(head->next);
    printf("%d ", head->data);
}

int main() {
    struct node* head = NULL;
    int data, n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    printf("Reverse print of linked list: ");
    reversePrint(head);

    return 0;
}
