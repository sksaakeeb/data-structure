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

// Delete a node at the beginning of Linked List

struct Node *deleteFirst(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main()
{
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

    printf("Linked List before deleting first node:\n");
    printList(head);

    head = deleteFirst(head);
    printf("Linked List after deleting first node:\n");
    printList(head);

    return 0;
}
