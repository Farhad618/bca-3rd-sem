int insert_at_position(int *arr, int n, int val, int pos){
    for (int i = n; i >= pos; i--)
    {
        *(arr+i) = *(arr+(i-1));
    }
    
    *(arr+pos) = val;
}