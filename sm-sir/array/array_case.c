void help()
{
    printf("0 - Help\n");
    printf("1 - Insert\n");
    printf("\t1 - Beginning\n");
    printf("\t2 - Middle\n");
    printf("\t3 - Last\n");
    printf("2 - Delete\n");
    printf("\t1 - Beginning\n");
    printf("\t2 - Middle\n");
    printf("\t3 - Last\n");
    printf("3 - Search\n");
    printf("\t1 - Linear\n");
    printf("\t2 - Binary\n");
    printf("4 - Sort\n");
    printf("\t1 - Bubble\n");
    printf("\t2 - Insertion\n");
    printf("\t3 - Selection\n");
    printf("\t4 - Merge\n");
    printf("\t5 - Quick\n");
    printf("5 - Display array\n");
    printf("6 - Insert many\n");
    printf("7 - Quit\n");
}

void insert(int *arr, int *n)
{
    int option, val, pos;
    printf("Enter the type of insertion: ");
    scanf("%d", &option);
    printf("Enter the value to be inserted: ");
    scanf("%d", &val);

    switch (option)
    {
    case 0:
        help();
        break;
    case 1:
        insert_at_beginning(arr, n, val);
        break;
    case 2:
        printf("Enter the position: ");
        scanf("%d", &pos);
        insert_at_position(arr, n, val, pos);
        break;
    case 3:
        insert_at_last(arr, n, val);
        break;

    default:
        printf("Enter a valid command\n");
        help();
        break;
    }
}

void delete (int *arr, int *n)
{
    int option, pos;
    printf("Enter the type of deletion: ");
    scanf("%d", &option);

    switch (option)
    {
    case 0:
        help();
        break;
    case 1:
        delete_from_beginning(arr, n);
        break;
    case 2:
        printf("Enter the position: ");
        scanf("%d", &pos);
        delete_from_position(arr, n, pos);
        break;
    case 3:
        delete_from_last(arr, n);
        break;

    default:
        printf("Enter a valid command\n");
        help();
        break;
    }
}

void search(int *arr, int n)
{
    int option, val, pos;
    printf("Enter the type of search: ");
    scanf("%d", &option);
    printf("Enter the value to be searched: ");
    scanf("%d", &val);

    switch (option)
    {
    case 0:
        help();
        break;
    case 1:
        pos = search_linear(arr, n, val);
        break;
    case 2:
        pos = search_binary(arr, n, val);
        break;

    default:
        printf("Enter a valid command\n");
        help();
        break;
    }

    if (pos > -1)
    {
        printf("a[%d] = %d\n", pos, val);
    }
    else
    {
        printf("Element not found.\n");
    }
}

void sort(int *arr, int n)
{
    int option;
    printf("Enter the type of sort: ");
    scanf("%d", &option);

    switch (option)
    {
    case 0:
        help();
        break;
    case 1:
        sort_bubble(arr, n);
        break;
    case 2:
        sort_insertion(arr, n);
        break;
    case 3:
        sort_selection(arr, n);
        break;
    case 4:
        sort_merge(arr, n);
        break;
    case 5:
        sort_quick(arr, n);
        break;

    default:
        printf("Enter a valid command\n");
        help();
        break;
    }
}

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