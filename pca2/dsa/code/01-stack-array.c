#include <stdio.h>
#define SIZE 5

int stack[SIZE];
int tos = -1;

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
	if (tos == -1)
	{
		printf("Stack underflow.\n");
		return;
	}
	for (int i = tos; i >= 0; i--)
	{
		if (i != tos)
		{
			printf("|\t%d\t|\n", stack[i]);
		} else {
			printf("|\t%d\t| < top\n", stack[i]);
		}
	}
	printf(" _______________\n");
}

void push(int val){
	if (tos == SIZE - 1)
	{
		printf("Stack overflow.\n");
		return;
	}
	tos = tos + 1;
	stack[tos] = val;
}

int pop(){
	if (tos == -1)
	{
		printf("Stack underflow.\n");
		return -1;
	}
	int top_element = stack[tos];
	stack[tos] = 0;
	tos = tos - 1;
	return top_element;	
}