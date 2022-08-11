#include <stdio.h>
#include "array_utilities.h"
// void display_array(int *, int, char);

int main(){
    int arr[10] = {1, 8, 5, 4, 3};

    display_array(arr, 10);
    printf("\n");

    insert_at_beginning(arr, 5, 9);

    display_array(arr, 10);
    return 0;
}