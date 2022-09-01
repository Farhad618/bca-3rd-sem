void help()
{
    printf("0 - Help\n");
    printf("1 - Insert\n");
    printf("\t1 - Beginning\n");
    printf("\t2 - Middle\n");
    printf("\t3 - Last\n");
    printf("2 - Delete\n");
    printf("3 - Search\n");
    printf("4 - Sort\n");
    printf("5 - Display array\n");
    printf("6 - Quit\n");
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
        break;
    }
}

void delete(){}
void search(){}
void sort(){}