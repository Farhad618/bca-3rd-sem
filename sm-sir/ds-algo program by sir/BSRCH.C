#include<stdio.h>
#include<conio.h>

void main()
{
   int c, first, last, middle, n, search, array[20],count=0;

   printf("Enter number of elements\n");
   scanf("%d",&n);

   printf("Enter %d integers\n",n);

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]);

   printf("Enter value to find\n");
   scanf("%d", &search);

   first = 0;
   last = n - 1;
   middle = (first+last)/2;

   while (first <= last) {
      count++;   //to find no. of itereations
      if (array[middle] < search)
	 first = middle + 1;
      else if (array[middle] == search) {
	 printf("%d found at location %d.\n", search, middle+1);
	 printf("\nNo. of iterations:%d",count);
	 getch();
	 exit(0);
      }
      else
	 last = middle - 1;

      middle = (first + last)/2;
   }

      printf("Not found! %d is not present in the list.\n", search);
      getch();
}