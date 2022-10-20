#include <stdio.h>
#include <malloc.h>

struct node
{
    int data;
    struct node *next;
};

int main(int argc, char const *argv[])
{
    /* input taking in linked list start */
    struct node *head = (struct node *) malloc(sizeof(struct node));
    printf("> ");
    scanf("%d", &head->data);
    head->next = NULL;

    struct node *new_node, *ptr;
    ptr = head;

    for (int i = 1; i < 3; i++)
    {
        new_node = (struct node *) malloc(sizeof(struct node));
        printf("> ");
        scanf("%d", &new_node->data);
        new_node->next = NULL;
        ptr->next = new_node;
        ptr = ptr->next;
    }
    /* input taking in linked list end */

    // write the code below
    /* insert at beginning start*/
    new_node = (struct node *) malloc(sizeof(struct node));
    printf("Enter the vlaue to insert at the beginning:\n> ");
    scanf("%d", &new_node->data);
    new_node->next = head;
    head = new_node;
    /* insert at beginning end*/

    /* code to display the linked list */
    ptr = head;
    int i=1;
    while (ptr != NULL)
    {   
        
        printf("%d. %d %d\n", i++, ptr->data, ptr->next);
        ptr = ptr->next;
    }
    /* display linked list end */

    return 0;
}
