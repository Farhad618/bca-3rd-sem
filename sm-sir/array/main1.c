#include <stdio.h>
#include "array_utilities.h"
// void display_array(int *, int, char);

int main(){
    int arr[] = {1, 8, 5, 4, 3};
    int n = 5;
    // printf("%d", sizeof(arr)/sizeof(int));

    display_array(arr, n);
    printf("\n");

    // insert_at_beginning(arr, 5, 9);
    // insert_at_position(arr, 5, 9, 1);
    // insert_at_last(arr, 5, 9);
    // insert_at_last(arr, 6, 8);
    // insert_at_last(arr, 7, 2);

    // delete_from_beginning(arr, &n);
    // delete_from_beginning(arr, &n);
    // delete_from_beginning(arr, &n);
    // delete_from_position(arr, &n, 1);
    // delete_from_position(arr, &n, 1);
    // delete_from_position(arr, &n, 1);
    delete_from_last(arr, &n);
    delete_from_last(arr, &n);
    delete_from_last(arr, &n);

    display_array(arr, n);
    printf("\n%d", n);
    // return 0;
}