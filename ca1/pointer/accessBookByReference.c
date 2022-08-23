#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//definition
struct Book {
    char bookName[25];
    char authorName[25];
    int pages;
    float price;
};

int main(int argc, char const *argv[])
{
    //declaration
    struct Book *b0;
    b0 = (struct Book *) malloc(sizeof(struct Book));

    //initialising value
    strcpy(b0->bookName, "Data Structures With C");
    strcpy(b0->authorName, "Lipschutz");
    b0->pages = 400;
    b0->price = 750.89;
    
    //printing value
    printf("Book name:\t%s\n", b0->bookName);
    printf("Author name:\t%s\n", b0->authorName);
    printf("No. of pages:\t%d\n", b0->pages);
    printf("Price:\t\t%0.2frs", b0->price);

    return 0;
}

