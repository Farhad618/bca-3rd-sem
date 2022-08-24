#include <stdio.h>
#include <conio.h>

void main()
{
  int a[20], i, j, n, t;
  printf("\nThe no.of elements to be inserted:");
  scanf("%d", &n);
  printf("\nEnter the array:\n");
  for (i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++)
  {
    for (j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        t = a[i];
        a[i] = a[j];
        a[j] = t;
      }
    }
  }
  printf("\nSorted array is:\t");
  for (i = 0; i < n; i++)
    printf("%d\t", a[i]);
  getch();
}