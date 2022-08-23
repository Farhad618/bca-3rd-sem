#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;
    
};


int main(int argc, char const *argv[])
{
    int count = 5;

    struct node *head = NULL;
    head = malloc(sizeof(struct node));
    struct node *current = head;

    // printf("%d\n", head);
    // printf("%d\n", current);

    for (int i = 0; i < count; i++)
    {
        int storeData;
        printf("Enter the data %d: ", i);
        scanf("%d", &storeData);

        current->data = storeData;
        current->link = malloc(sizeof(struct node));
        current = current->link;

    }
    
    current = head;

    for (int i = 0; i < count; i++)
    {
        printf("%d ", current->data);
        current = current->link;
    }
    
    
    return 0;
}
