#include <stdio.h>
#include <string.h>

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
    struct Book b0;

    //taking value
    printf("Enter the book name: ");
    scanf("%[^\n]s", &b0.bookName);
    printf("Enter the author name: ");
    scanf(" %[^\n]s", &b0.authorName);
    printf("ENter no of pages: ");
    scanf("%d", &b0.pages);
    printf("Enter the book price: ");
    scanf("%f", &b0.price);
    
    printf("\n");
    //printing value
    printf("Book name:\t%s\n", b0.bookName);
    printf("Author name:\t%s\n", b0.authorName);
    printf("No. of pages:\t%d\n", b0.pages);
    printf("Price:\t\t%0.2frs", b0.price);

    return 0;
}

