void quicksort(int*, int, int);
int partition(int*, int, int);

void quicksort(int *a, int beg, int end)
{
    int loc;
    if (beg < end)
    {
        loc = partition(a, beg, end);
        quicksort(a, beg, loc - 1);
        quicksort(a, loc + 1, end);
    }
}
int partition(int *a, int beg, int end)
{
    int left, right, loc, temp, flag = 0;
    left = loc = beg;
    right = end;
    while (flag != 1)
    {
        while (*(a + loc) <= *(a + right) && loc != right)
            right--;
        if (loc == right)
            flag = 1;
        else if (*(a + loc) > *(a + right))
        {
            temp = *(a + loc);
            *(a + loc) = *(a + right);
            *(a + right) = temp;
            loc = right;
        }
        if (flag != 1)
        {
            while (*(a + loc) >= *(a + left) && loc != left)
                left++;
            if (loc == left)
                flag = 1;
            else if (*(a + loc) < *(a + left))
            {
                temp = *(a + loc);
                *(a + loc) = *(a + left);
                *(a + left) = temp;
                loc = left;
            }
        }
    }
    return loc;
}

void sort_quick(int* arr, int n){
    quicksort(arr, 0, n - 1);
}