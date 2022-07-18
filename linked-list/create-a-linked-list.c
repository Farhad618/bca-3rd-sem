#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
    
};


int main(int argc, char const *argv[])
{
    struct node *head = NULL;
    head = malloc(sizeof(struct node));

    head->data = 45;
    head->link = NULL;

    head->link = malloc(sizeof(struct node));

    head->link->data = 89;
    head->link->link = NULL;

    printf("%d\n", head->data);
    printf("%d\n", head->link->data);
    
    return 0;
}
