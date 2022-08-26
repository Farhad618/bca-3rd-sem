#include <stdio.h>
#include "array_utilities.h"
// void display_array(int *, int, char);

int main(){
    int arr[] = {1, 8, 5, 4, 3};
    int n = 5;
    // printf("%d", sizeof(arr)/sizeof(int));

    display_array(arr, n);
    printf("\n");

    // insert_at_beginning(arr, &n, 9);
    // insert_at_beginning(arr, &n, 6);
    // insert_at_beginning(arr, &n, 2);
    // insert_at_position(arr, &n, 9, 1);
    // insert_at_position(arr, &n, 8, 1);
    // insert_at_position(arr, &n, 10, 1);
    insert_at_last(arr, &n, 9);
    insert_at_last(arr, &n, 8);
    insert_at_last(arr, &n, 2);

    // delete_from_beginning(arr, &n);
    // delete_from_beginning(arr, &n);
    // delete_from_beginning(arr, &n);
    // delete_from_position(arr, &n, 1);
    // delete_from_position(arr, &n, 1);
    // delete_from_position(arr, &n, 1);
    // delete_from_last(arr, &n);
    // delete_from_last(arr, &n);
    // delete_from_last(arr, &n);

    display_array(arr, n);
    printf("\n%d", n);
    // return 0;
}