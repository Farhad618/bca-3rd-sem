#include <stdio.h>

void print(int *arrPtr);

int main(int argc, char const *argv[])
{
    int elements[5] = {-1041, 30, -7, 20, 22};
    
    print(elements);
    return 0;
}

void print(int *arrPtr) {
    for (int element = 0; element < 5; element++)
    {
        printf("The value in index %d is: %d\n", 
        element, *(arrPtr + element));
    }      
}

