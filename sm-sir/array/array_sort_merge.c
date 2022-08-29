#include <malloc.h>

int sizeOfOriginalArray;

void merge(int *, int, int, int);
void merge_sort(int *, int, int);


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
    }
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
    sizeOfOriginalArray = n;
    // main merge sort function call
    merge_sort(arr, 0, n-1); 
}