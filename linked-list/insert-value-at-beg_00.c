#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *link;    
};

struct node* insert_at_beg(struct node* head, int value)
{
    // printf("->%d %d\n", head, ptr);
    struct node* ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = value;
    ptr->link = head;

    head = ptr;

    return head;
};


int main(){
    struct node *head = NULL;
    // struct node *ptr = NULL;
    head = (struct node *)malloc(sizeof(struct node));

    // ptr = head;


    head->data = 45;
    head->link = NULL;

    // printf("%d %d\n", head->data, head->link);
    // printf("%d %d\n", head, ptr);

    head = insert_at_beg(head, 46);
    // printf("%d %d\n", head->data, head->link);
    head = insert_at_beg(head, 47);
    // printf("%d %d\n", head->data, head->link);

    while (1)
    {
        printf("%d %d\n", head->data, head->link);
        head = head->link;

        if (!head)
        {
            break;
        }
        
    }
    



    return 0;
}