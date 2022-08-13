#include <stdio.h>
#include "array_utilities.h"
// void display_array(int *, int, char);

int main(){
    int arr[10] = {1, 8, 5, 4, 3};

    display_array(arr, 10);
    printf("\n");

    // insert_at_beginning(arr, 5, 9);
    // insert_at_position(arr, 5, 9, 1);
    // insert_at_last(arr, 5, 9);
    // insert_at_last(arr, 6, 8);
    // insert_at_last(arr, 7, 2);

    delete_from_beginning(arr, 5);

    display_array(arr, 10);
    return 0;
}