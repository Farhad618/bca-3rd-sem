void display_array(int arr[], int count){
    for (int i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
        if (i < count - 1)
        {
            printf(", ");
        }
        
    }
}