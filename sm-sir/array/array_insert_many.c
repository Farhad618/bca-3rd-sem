void insert_many(int *arr, int *n)
{
    int noOfElements, val;
    printf("Enter the number of elements: ");
    scanf("%d", &noOfElements);

    for (int i = 0; i < noOfElements; i++)
    {

        printf("array[%d] = ", (*n));
        scanf("%d", &val);
        insert_at_last(arr, n, val);
    }
}