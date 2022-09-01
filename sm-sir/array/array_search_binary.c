int search_binary(int* arr, int n, int search_val){
    int beg = 0;
    int end = n-1;
    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (*(arr+mid) == search_val)
        {
            return mid;
        }
        else if (*(arr+mid) > search_val)
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }       
    }
    return -1;
}