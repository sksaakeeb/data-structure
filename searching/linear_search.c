#include <stdio.h>

int lenearSearch(int arr[], int size, int x)
{

    int i;
    for (i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{

    int size, elements, i, x, result, arr[50];

    printf("Enter the number of elements:\n");
    scanf("%d", &size);

    printf("Enter the elements:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search");
    scanf("%d", &x);

    result = lenearSearch(arr, size, x);

    if (result == -1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element found at index %d", result + 1);
    }
}
