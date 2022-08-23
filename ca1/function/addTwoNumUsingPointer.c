#include <stdio.h>

int addTwoNum (int*, int*);

int main(int argc, char const *argv[])
{
    int num1 = 5;
    int num2 = 6;

    //function call
    int sum = addTwoNum(&num1, &num2);

    printf("Sum of %d and %d is: %d", num1, num2, sum);
    return 0;
}

int addTwoNum (int *a, int *b) {
    return *a + *b;
}

