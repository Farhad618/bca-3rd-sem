#include <stdio.h>
#include <malloc.h>

struct node{
	int data;
	struct node* next;
} *stack = NULL;

void push(int);
int pop();
void display();

int main(){
	int choice = 0;

	while(1){
		switch(choice) {
			case 0:
				printf("0 - HELP\n");
				printf("1 - PUSH\n");
				printf("2 - POP\n");
				printf("3 - DISPLAY\n");
				printf("4 - QUIT\n");
				break;
			case 1:
				int val;
				printf("Enter the value to be pushed: ");
				scanf("%d", &val);
				push(val);
				display();
				break;
			case 2:
				printf("%d is popped.\n", pop());
				display();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("Quit...\n");
				return 0;
			default:
				printf("Not a valid command.\n");
		}
		printf("Enter a command: ");
		scanf("%d", &choice);
	}
}

void display(){
	if (stack == NULL)
	{
		printf("Stack underflow.\n");
		return;
	}
	struct node* ptr = stack;
	while(ptr){
		if (ptr != stack)
		{
			printf("|\t%d\t|\n", ptr->data);
		} else {
			printf("|\t%d\t| < top\n", ptr->data);
		}
		ptr = ptr->next;
	}
	printf(" _______________\n");
}

void push(int val){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	if (new_node == NULL)
	{
		printf("Stack overflow.\n");
		return;
	}
	new_node->data = val;
	new_node->next = NULL;
	if (stack == NULL)
	{
		stack = new_node;
	} else {
		new_node->next = stack;
		stack = new_node;
	}
}

int pop(){
	if (stack == NULL)
	{
		printf("Stack underflow.\n");
		return -1;
	}
	int top_element = stack->data;
	struct node* ptr = stack;
	stack = stack->next;
	free(ptr);
	return top_element;	
}