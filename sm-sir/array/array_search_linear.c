int search_linear(int *arr, int* n, int search_val) {
    for (int i = 0; i < *n; i++)
    {
        if (*(arr+i) == search_val)
        {
            return i;
        }        
    }
    return -1;
}