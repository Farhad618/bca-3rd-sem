#include <stdio.h>

//decleration
void print();

int main(int argc, char const *argv[])
{
    //function call
    print();
    print();
    print();
    return 0;
}

//definition
void print() {
    printf("Hey, I am using C.\n");
}

