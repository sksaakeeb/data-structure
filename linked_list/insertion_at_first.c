#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printList(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf(" %d\n", ptr->data);
        ptr = ptr->next;
    }
}

// Insert element at the beginning of a Linked List

struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

int main()
{

    int sc;

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // Allocate 3 nodes in the heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;      // Assign data in first node
    head->next = second; // Link first node with second

    second->data = 2; // Assign data to second node
    second->next = third;

    third->data = 3; // Assign data to third node
    third->next = NULL;

    head = insertAtBeginning(head, 50);
    printList(head);

    return 0;
}
