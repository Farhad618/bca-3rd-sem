#include <stdio.h>
#include <malloc.h>

struct Node {
	int data;
	struct Node *next;
};
struct Node *f = NULL;
struct Node *r = NULL;


int isFull();
int isEmpty();
void printAll();
void enQueue();
void enQueueMany();
int deQueue();
int firstValue();
int lastValue();
int peek();
void help();

int main()
{
	int choice = 0;

	while(1){
		switch(choice){
			case 0:
				help();                               break;
			case 1:
				enQueue();                            break;
			case 2:
				printf("- %d\n", deQueue());          break;
			case 3:
				printf("> %d\n", peek());             break;
			case 4:
				printf("%s\n", isEmpty()?"Yes":"No"); break;
			case 5:
				printf("%s\n", isFull()?"Yes":"No");  break;
			case 6:
				printf("> %d\n", firstValue());       break;
			case 7:
				printf("> %d\n", lastValue());        break;
			case 8:
				printAll();                           break;
			case 9:
				enQueueMany();                        break;
			case 10:
				printf("Quit...\n");
				return 0;
			default:
				printf("Not a valid command.\n");
		}
		printf("Enter a command: ");
		scanf("%d", &choice);
	}
	return 0;
}

int isFull(){
	/*if (f == length)
	{
		return 1;
	} else {
		return 0;
	}*/
}
int isEmpty(){
	if (f != NULL)
	{
		return 0;
	} else {
		return 1;
	}
}
void enQueue(){
	struct Node *new_node = (struct Node *) malloc(sizeof(struct Node));
	if (new_node)
	{
		printf("+ ");
		int val;
		scanf("%d", &new_node->data);
		new_node->next = NULL;
		if (isEmpty()){
			f=r=new_node;
		} else {
			r->next = new_node;
			r=new_node;
		}
	} else {
		printf("Queue is full.\n");
	}
}
void enQueueMany(){
	int n;
	printf("Enter the number of elements you want to enqueue: ");
	scanf("%d", &n);
	for (int i = 0; i < n; ++i)
	{
		enQueue();
	}
}
int deQueue(){
	if (!isEmpty())
	{
		struct Node *temp = f;
		int val = f->data;
		
		f = f->next;
		free(temp);
		return val;
	} else {
		printf("Queue is empty.\n");
	}
}
int firstValue(){
	if (!isEmpty())
	{
		return f->data;
	}
}
int lastValue(){
	if (!isEmpty())
	{
		return r->data;
	}
}
void printAll(){
	struct Node *ptr = f;
	while(ptr){
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
	printf("\n");
}
int peek(){
	int pos;
	printf("> ");
	scanf("%d", &pos);
	if (!isEmpty())
	{
		struct Node *ptr = f;
		int i = 0;
		while(ptr){
			if(i==pos){
				return ptr->data;
			}
			ptr = ptr->next;
			i++;
		}
		printf("Not a valid position.");
		return NULL;
	}
}
void help(){
	printf("[0] - Help\n");
	printf("[1] - Enqueue\n");
	printf("[2] - Dequeue\n");
	printf("[3] - Peek\n");
	printf("[4] - Is empty\n");
	printf("[5] - Is full\n");
	printf("[6] - First value\n");
	printf("[7] - Last value\n");
	printf("[8] - Print all\n");
	printf("[9] - Enqueue many\n");
	printf("[10] - Quit\n");
}
