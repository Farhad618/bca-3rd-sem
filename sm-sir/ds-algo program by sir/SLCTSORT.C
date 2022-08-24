#include <stdio.h>
#include <conio.h>

void main()
{
  int x[30], n, i, j, max, index;
  printf("\nHow many numbers:");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("\nEnter no:");
    scanf("%d", &x[i]);
  }
  for (i = n - 1; i >= 1; i--)
  {
    max = x[0];
    index = 0;
    for (j = 1; j <= i; j++)
    {
      if (x[j] > max)
      {
        max = x[j];
        index = j;
      }
    }
    x[index] = x[i];
    x[i] = max;
  }
  printf("\nSorted array is:");
  for (i = 0; i < n; i++)
  {
    printf("\n%d", x[i]);
  }
  getch();
}