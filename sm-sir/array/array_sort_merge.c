// #include <stdio.h>
// #include <conio.h>
#include <malloc.h>
#define size 50

int sizeOfOriginalArray;

void merge(int a[], int, int, int);
void merge_sort(int a[], int, int);
/*void main()
{ int arr[size],i,n;
  printf("\nEnter the elements in the array:");
  scanf("%d",&n);
  printf("\nEnter the elements of array:\n");
  for(i=0;i<n;i++)
  {printf("arr[%d]:",i);
   scanf("%d",&arr[i]);
  }
  merge_sort(arr,0,n-1);
  printf("\nThe sorted array is:\n");
  for(i=0;i<n;i++)
  printf("\t%d",arr[i]);
  getch();
}*/

void merge(int* arr, int beg, int mid, int end)
{
    int i = beg, j = mid + 1, index = beg, k;
    int* temp = (int *)calloc(sizeOfOriginalArray, sizeof(int));
    while ((i <= mid) && (j <= end))
    {
        if (*(arr + i) < *(arr + j))
        {
            *(temp + index) = *(arr + i);
            i++;
        }
        else
        {
            *(temp + index) = *(arr + j);
            j++;
        }
        index++;
    } // end of while
    if (i > mid)

    {
        while (j <= end)
        {
            *(temp + index) = *(arr + j);
            j++;
            index++;
        }
    }
    else
    {
        while (i <= mid)
        {
            *(temp + index) = *(arr + i);
            i++;
            index++;
        }
    }
    for (k = beg; k < index; k++)
        *(arr + k) = *(temp + k);
}

void merge_sort(int* arr, int beg, int end)
{
    int mid;
    if (beg < end)
    {
        mid = (beg + end) / 2;
        merge_sort(arr, beg, mid);
        merge_sort(arr, mid + 1, end);
        merge(arr, beg, mid, end);
    }
}

void sort_merge(int *arr, int n) {
    // int* arrCopy = (int *)calloc(n, sizeof(int));
    // for (int i = 0; i < n; i++)
    // {
    // printf("hi");
    //     *(arrCopy + i) = *(arr + i);
    // }
    sizeOfOriginalArray = n;
    merge_sort(arr, 0, n-1);
    // printf("\n2\n");
    // for (int i = 0; i < n; i++)
    // {
    //     printf("%d ", *(arrCopy + i));
    // }
    
    

}