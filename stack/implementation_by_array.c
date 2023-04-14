#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int stack[MAX], top = -1;

void push();
void pop();
void display();

int main()
{
    int ch;

    printf("1 : Push elements in stack.\n2 : Pop elements from stack.\n3 : Display elements of stack.\n4 : Exit.\n");

    while (1)
    {
        printf("Enter your choice:\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;

        default:
            printf("Invalid Choice!");
        }
    }
}

void push()
{

    int item;

    if (top == MAX - 1)
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Enter the element you want to insert:\n");
        scanf("%d", &item);
        top = top + 1;
        stack[top] = item;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Popped %d\n", stack[top]);
        top = top - 1;
    }
}

void display()
{

    int i;

    if (top >= 0)
    {
        printf("Stack elements are:\n");
        for (i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}
