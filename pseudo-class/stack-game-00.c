#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int size = 3;


int isEmpty(struct stack *);
int isFull(struct stack *);
int push(struct stack *, int);
int pop(struct stack *);
void displayStack(struct stack *);

int main()
{
    // printf("dfg");
    struct stack *s1 = (struct stack *)malloc(sizeof(struct stack));
    struct stack *s2 = (struct stack *)malloc(sizeof(struct stack));
    s1->size = size;
    s1->top = -1;
    s1->arr = (int *)malloc(s1->size * sizeof(int));
    s2->size = size;
    s2->top = -1;
    s2->arr = (int *)malloc(s1->size * sizeof(int));
    
    for (int i = 0; i < size; i++)
    {
        int a, b;
        printf("%d. Enter value for s1 and s2: ", i);
        scanf("%d %d", &a, &b);
        push(s1, a);
        push(s2, b);
    }

    displayStack(s1);
    printf(" <-1\n");
    displayStack(s2);
    printf("\n-------------------------------\n");

    // main game logic
    while (!(isEmpty(s1) || isEmpty(s2)))
    {
        int n1 = pop(s1);
        int n2 = pop(s2);
        
        if (n1 == n2)
        {
            continue;
        }        
        else if (n1 > n2)
        {
            for (int i = 0; i < (n1-n2); i++)
            {
                push(s2, pop(s1));
            }
            
        }
        else if (n2 > n1)
        {
             for (int i = 0; i < (n2-n1); i++)
            {
                push(s1, pop(s2));
            }           
        }
        displayStack(s1);
        printf(" <-2\n");
        displayStack(s2);
        printf("\n-------------------------------\n");
    }
    
        displayStack(s1);
        printf(" <-3\n");
        displayStack(s2);
        printf("\n-------------------------------\n");

        if (isEmpty(s1))
        {
            printf("s1 win");
        }else if (isEmpty(s2))
        {
            printf("s2 win");
        }
        
        

    return 0;
}

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1; // full
    }
    else
    {
        return 0;
    }
}

int push(struct stack *ptr, int n)
{
    if (isFull(ptr))
    {
        return -1;
    }
    else
    {
        (ptr->top)++;
        ptr->arr[ptr->top] = n;
        return ptr->top;
    }
}

int pop(struct stack *ptr)
{
    if (!(isEmpty(ptr)))
    {
        int temp = ptr->arr[ptr->top];
        ptr->arr[ptr->top] = 0;
        (ptr->top)--;
        return temp;
    }
    // else
    // {   
    //     int temp = ptr->arr[ptr->top];
    //     ptr->arr[ptr->top] = 0;
    //     (ptr->top)--;
    //     return temp;
    // }    
}

void displayStack(struct stack *ptr)
{
    for (int i = 0; i < ptr->size; i++)
    {
        printf("%d\t", ptr->arr[i]);
    }
    
}

