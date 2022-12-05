#include <stdio.h>

int main()
{
    int a[50], i, n, pos;

    printf("Enter the size of array:\n");
    scanf("%d", &n);

    printf("Input %d elements in the array in ascending order:\n");
    for (i = 0; i < n; i++)
    {
        printf("Element - %d:", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the position, you wanr to delete:\n");
    scanf("%d", &pos);
    i = 0;
    while (i != pos - 1)
        i++;

    while (i < n)
    {
        a[1] = a[i + 1];
        i++;
    }
    n--;

    printf("The new list is:");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    printf("\n\n");
}
