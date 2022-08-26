int insert_at_beginning(int *arr, int* n, int val){
    for (int i = *n; i >= 1; i--)
    {
        *(arr+i) = *(arr+(i-1));
    }
    
    *arr = val;
    *n = (*n)+1;
}