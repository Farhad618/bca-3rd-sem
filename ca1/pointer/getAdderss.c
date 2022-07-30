#include <stdio.h>
 
int main()
{
    int i = 10; 
    int *ptr = &i;

    printf("Value of i: %d\n", *ptr);
    printf("Address of i: %p\n", ptr);

    *ptr = 20;
    printf("Value of i: %d\n", *ptr); 
    return 0;
}

