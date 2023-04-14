#include <stdio.h>

int binary_search(int arr[], int left, int right, int x) {
    if (right >= left) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binary_search(arr, left, mid - 1, x);

        return binary_search(arr, mid + 1, right, x);
    }

    return -1;
}

int main() {
    int n, x, result;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched:\n");
    scanf("%d", &x);

    result = binary_search(arr, 0, n - 1, x);

    if (result == -1)
        printf("Element not found\n");
    else
        printf("Element found at index %d\n", result + 1);

    return 0;
}
