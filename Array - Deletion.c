#include <stdio.h>

int main()
{
   int arr[50], position, i, size;

   printf("Enter number of elements in array:\n");
   scanf("%d", &size);

   printf("Enter %d elements:\n", size);

   for (i = 0; i < size; i++)
      scanf("%d", &arr[i]);

   printf("Enter the location where you wish to delete element:\n");
   scanf("%d", &position);

   if (position >= size + 1)
      printf("Deletion not possible.\n");
   else
   {
      for (i = position - 1; i < size - 1; i++)
         arr[i] = arr[i + 1];

      printf("Resultant array:\n");

      for (i = 0; i < size - 1; i++)
         printf("%d\n", arr[i]);
   }

   return 0;
}