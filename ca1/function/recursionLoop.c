#include <stdio.h>

//decleration
int loop(int);

int main(int argc, char const *argv[])
{
    //function call
    loop(5);
    return 0;
}

//definition
int loop(int next) {
    if(next >= 0){
        printf("%d\n", next);
        return loop(next-1);
    }
}

