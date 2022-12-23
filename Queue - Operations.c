#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int queue[MAX], f = -1, r = -1;

void rear();
void front();
void display();

int main()
{
    int ch;

    printf("1 : Push elements in queue.\n2 : Pop elements from queue.\n3 : Display elements of queue.\n4 : Exit.\n");

    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            rear();
            break;
        case 2:
            front();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid choice!");
        }
    }
}

void rear()
{
    int item;

    if (r == MAX - 1)
    {
        printf("Queue is full.");
    }
    else
    {
        if (f == -1)
        {
            f = 0;
        }
        printf("Enter elements in Queue:\n");
        scanf("%d", &item);
        r = r + 1;
        queue[r] = item;
    }
}

void front()
{
    if (f == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Deleted item is: %d\n", queue[f]);
        f = f + 1;
    }
}

void display()
{
    int i;

    if (f == -1)
    {
        printf("Queue is empty.\n");
    }
    else
    {
        printf("Queue elements:\n");
        for (i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}