#include <stdio.h>

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
    struct Book books[3];

    //taking value
    for (int book = 0; book < 3; book++)
    {
        printf("Book ID: %d\n", book);
        printf("Enter the book name: ");
        scanf(" %[^\n]s", &books[book].bookName);
        printf("Enter the author name: ");
        scanf(" %[^\n]s", &books[book].authorName);
        printf("ENter no of pages: ");
        scanf("%d", &books[book].pages);
        printf("Enter the book price: ");
        scanf("%f", &books[book].price);        
    }

    //printing value
    for (int book = 0; book < 3; book++)
    {    
        printf("\n");
        printf("Book ID: %d\n", book);
        printf("Book name:\t%s\n", books[book].bookName);
        printf("Author name:\t%s\n", books[book].authorName);
        printf("No. of pages:\t%d\n", books[book].pages);
        printf("Price:\t\t%0.2frs", books[book].price);
    }
    return 0;
}

