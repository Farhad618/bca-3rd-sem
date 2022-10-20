#include <stdio.h>
#include <malloc.h>

struct node {
	struct node *prev;
	int data;
	struct node *next;
} *head = NULL;

void print() {
	struct node *ptr = head;
	while(ptr != NULL) {
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}

struct node* ins_beg_dll(struct node *, int);

int main(int argc, char const *argv[])
{
	head = (struct node *) malloc(sizeof(struct node));
	head->prev = NULL;
	head->data = 5;
	head->next = NULL;

	head = ins_beg_dll(head, 9);
	head = ins_beg_dll(head, 10);

	print();

	return 0;
}


struct node* ins_beg_dll(struct node *h, int d) {
	struct node *new_node = (struct node *) malloc(sizeof(struct node));
	new_node->prev = NULL;
	new_node->data = d;
	new_node->next = h;
	h->prev = new_node;
	h = new_node;
	return h;
}