// stack-00.c
#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *link;
} *top = NULL;
int last = -1;

void push(int);
int pop();
int peek();
void print(struct node *);

int main(int argc, char const *argv[])
{
	push(5);
	push(2);
	push(9);
	print(top);
	print(top);
	pop();
	print(top);
	pop();
	print(top);
	pop();
	print(top);
	pop();
	// print(top);

	return 0;
}

void push(int data) {
	struct node *new_node = (struct node *)malloc(sizeof(struct node));
	if (new_node) {
		last++;
		new_node->data = data;
		new_node->link = top;
		top = new_node;
	} else {
		printf("Stack overflow.\n");
		return;
	}
}

int pop() {
	if (top) {
		last--;
		struct node *temp = top;
		int data = top->data;
		top = top->link;
		free(temp);
		return data;
	} else {
		printf("Stack underflow.\n");
		return (int)NULL;
	}

}

int peek() {
	if (top)
	{
		return top->data;
	} else {
		return (int)NULL;
	}
}

void print(struct node *stack) {
	for (int i = 0; i <= last; ++i)
	{
		// printf("%d %d\n", stack->data, stack->link);
		printf("%d ", stack->data);
		stack = stack->link;
	}
	printf("\n");
}