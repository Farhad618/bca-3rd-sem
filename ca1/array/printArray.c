#include <stdio.h>

int main(int argc, char const *argv[])
{
    int elements[5];

    for (int element = 0; element < 5; element++)
    {
        printf("Enter the value of index %d: ", element);
        scanf("%d", &elements[element]);
    }
    
    printf("\n");

    for (int element = 0; element < 5; element++)
    {
        printf("The value in index %d is: %d\n", 
        element, elements[element]);
    }    

    return 0;
}

