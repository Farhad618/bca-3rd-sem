#include <stdio.h>

void print(int arr[]);

int main(int argc, char const *argv[])
{
    int elements[5] = {-1032, 30, -7, 20, 22};
    
    print(elements);
    return 0;
}

void print(int arr[]) {
    for (int element = 0; element < 5; element++)
    {
        printf("The value in index %d is: %d\n", 
        element, arr[element]);
    }      
}

