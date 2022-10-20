#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *left, *right;
} *root = NULL;

struct node * create(){
	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	if(new_node){
		printf("D> ");
		scanf("%d", &new_node->data);
		int choice;
		printf("CL[%d]> ", new_node->data);
		scanf("%d", &choice);
		if(choice){
			new_node->left = create();
		}
		printf("CR[%d]> ", new_node->data);
		scanf("%d", &choice);
		if(choice){
			new_node->right = create();
		}		
	} else {
		printf("tree is full.");
	}
	return new_node;
}

int main(){
	
	root = create();
	
	return 0;
}

