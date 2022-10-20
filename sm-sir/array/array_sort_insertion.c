void sort_insertion(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = *(arr + i);
        for (int j = i - 1; j >= 0; j--)
        {
            if (*(arr + j) > temp)
            {
                *(arr + (j + 1)) = *(arr + j);
                *(arr + j) = temp;
            }
            else
            {
                break;
            }
        }
    }
}