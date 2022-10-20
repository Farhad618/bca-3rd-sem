#include <stdio.h>
#include "array_utilities.h"

int main()
{
    // number of elements initialized in array arr[]
    // must be equal to the value of variable n
    int arr[] = {};
    int n = 0;

    int option = 0;

    while (1)
    {
        switch (option)
        {
        case 0:
            help();
            break;
        case 1:
            insert(arr, &n);
            break;
        case 2:
            delete (arr, &n);
            break;
        case 3:
            search(arr, n);
            break;
        case 4:
            sort(arr, n);
            break;
        case 5:
            printf("array[%d] = {", n);
            display_array(arr, n);
            printf("}\n");
            break;
        case 6:
            insert_many(arr, &n);
            break;
        case 7:
            return 0;
            break;
        default:
            printf("Enter a valid command\n");
            help();
            break;
        }

        printf("> ");
        scanf("%d", &option);
    }

    return 0;
}