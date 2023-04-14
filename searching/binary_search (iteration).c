#include <stdio.h>

int binary_search(int arr[], int size, int element)
{
    int low = 0, high = size - 1;

    while(low <= high)
    {
        int mid = low + (high - low)/2;

        if(arr[mid] == element)
        return mid;

        else if(arr[mid] < element)
        low = mid + 1;

        else
        high = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[100], i, size, element, result;

    printf("Enter the size of the array:\n");
    scanf("%d", &size);

    printf("Enter the elements(in sorted order):\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element you want to search:\n");
    scanf("%d", &element);

    result = binary_search(arr, size, element);

    if (result == -1)
    {
        printf("Elemet not found!");
    }
    else
        printf("Element found at %d position", result + 1);

    return 0;
}