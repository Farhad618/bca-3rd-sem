int delete_from_position(int *arr, int n, int pos){
    for (int i = pos; i < n-1; i++)
    {
        *(arr+i) = *(arr+(i+1));
    }
    
    *(arr+(n-1)) = 0;
}