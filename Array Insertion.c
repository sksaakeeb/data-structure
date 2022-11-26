#include <stdio.h>

int main()
{
    int a[50], n, i, items, pos;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the position, you want to insert:\n");
    scanf("%d", &pos);
    pos--;

    printf("Enter the element you want to insert:\n");
    scanf("%d", &items);
    for (i = n; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos] = items;
    printf("The new list is:\n");
    for (i = 0; i <= n; i++)
    {
        printf("%d\n", i++);
    }

    return 0;
}