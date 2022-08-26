#include <stdio.h>
#include <conio.h>

void main()
{
   int c, n, search, array[20], count = 0;

   printf("Enter number of elements\n");
   scanf("%d", &n);

   printf("Enter %d integers\n", n);

   for (c = 0; c < n; c++)
      scanf("%d", &array[c]);

   printf("Enter value to find\n");
   scanf("%d", &search);

   for (c = 0; c < n; c++)
   {
      count++;
      if (array[c] == search)
      {
         printf(" found! %d is present at %d location\n", search, c + 1);
         printf("\nNo. of iterations:%d", count);
         getch();
         exit(0);
      }
   }
   printf("Element %d is not found");
   getch();
}