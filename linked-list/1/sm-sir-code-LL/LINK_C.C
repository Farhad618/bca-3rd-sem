//to implement circular linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{int data;
 struct node *next;
};

struct node *start=NULL;
struct node *create_cll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *start);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_node(struct node *);
struct node *delete_after(struct node *);
struct node *delete_list(struct node *start);
struct node *sort_list(struct node *start);

int main()
{int choice;
 while(1)
 {
  printf("\n~~~~~~~~~~~~ MAIN MENU~~~~~~~~~~~");
  printf("\n1.Create a list");
  printf("\n2.Display the list");
  printf("\n3.Insertion of a node at begin");
  printf("\n4.Insertion of a node at end");
  printf("\n5.Insertion of a node before a given node");
  printf("\n6.Insertion of a node after a given node");
  printf("\n7.Deletion of a node at begin");
  printf("\n8.Deletion of a node at end");
  printf("\n9.Deletion of a given node");
  printf("\n10.Deletion of a node after a given node");
  printf("\n11.Deletion of the list");
  printf("\n12.Sorting of the linked list");
  printf("\n13.exit");
  printf("\nEnter ur choice:");
  scanf("%d",&choice);

  switch(choice)
  {case 1: start=create_cll(start);
	   printf("\nCircular Linked list created");
	   break;
   case 2: start=display(start);
	   break;
   case 3: start=insert_beg(start);
	   break;
   case 4: start=insert_end(start);
	   break;
   case 5: start=insert_before(start);
	   break;
   case 6: start=insert_after(start);
	   break;
   case 7: start=delete_beg(start);
	   break;
   case 8: start=delete_end(start);
	   break;
   case 9: start=delete_node(start);
	   break;
   case 10: start=delete_after(start);
	   break;
   case 11: start=delete_list(start);
	    printf("\nCircular Linked list deleted");
	    break;
   case 12: start=sort_list(start);
	    break;
   case 13: exit(0);

   default : printf("\nInvalid choice");
	     break;

  }//end of switch



 }//end of while
  getch();
 return 0;
}//end of main

struct node *create_cll(struct node *start)
{struct node *new_node,*ptr;
 int num;
 printf("\nEnter -1 to end");
 printf("\nEnter data:");
 scanf("%d",&num);
 while(num!=-1)
 {new_node=(struct node*)malloc(sizeof(struct node));
  new_node->data=num;
  if(start==NULL)
  {new_node->next=new_node;
   start=new_node;
  }
  else
  {ptr=start;
   while(ptr->next!=start)
   ptr=ptr->next;
   ptr->next=new_node;
   new_node->next=start;
  }
  printf("\nEnter the data:");
  scanf("%d",&num);
 }//end of while
 return start;
}

struct node *display(struct node *start)
{struct node *ptr;
 ptr=start;
 while(ptr->next!=start)
 { printf("\t%d",ptr->data);
   ptr=ptr->next;
 }
 printf("\t%d",ptr->data);
 return start;
}

struct node *insert_beg(struct node *start)
{struct node *new_node,*ptr;
 int num;
 printf("\nEnter the data:");
 scanf("%d",&num);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;
 while(ptr->next!=start)
  ptr=ptr->next;
 ptr->next=new_node;
 new_node->next=start;
 start=new_node;
 return start;
}

struct node *insert_end(struct node *start)
{struct node *new_node,*ptr;
 int num;
 printf("\nEnter the data:");
 scanf("%d",&num);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;

 while(ptr->next!=start)
 ptr=ptr->next;
 ptr->next=new_node;
 new_node->next=start;
 return start;
}

struct node *insert_before(struct node *start)
{struct node *new_node,*ptr,*preptr;
 int num,val;
 printf("\nEnter the data:");
 scanf("%d",&num);
 printf("\nEnter the value before which the data has to b inserted");
 scanf("%d",&val);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;
 while(ptr->data!=val)
 {preptr=ptr;
  ptr=ptr->next;
 }

 preptr->next=new_node;
 new_node->next=ptr;
 return start;
}

struct node *insert_after(struct node *start)
{struct node *new_node,*ptr,*preptr;
 int num,val;
 printf("\nEnter the data:");
 scanf("%d",&num);
 printf("\nEnter the value after which the data has to b inserted");
 scanf("%d",&val);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;
 preptr=ptr;
 while(preptr->data!=val)
 {preptr=ptr;
  ptr=ptr->next;
 }

 preptr->next=new_node;
 new_node->next=ptr;
 return start;
}


struct node *delete_beg(struct node *start)
{ struct node *ptr;
  ptr=start;
  while(ptr->next!=start)
   ptr=ptr->next;
  ptr->next=start->next;
  free(start);
  start=ptr->next;

  return start;
}

struct node *delete_end(struct node *start)
{struct node *ptr,*preptr;
 ptr=start;
 while(ptr->next!=start)
 {preptr=ptr;
  ptr=ptr->next;
 }
 preptr->next=ptr->next;
 free(ptr);
 return start;
}

struct node *delete_node(struct node *start)
{struct node *ptr,*preptr;
 int val;
 printf("\nEnter the value of the node which is to b deleted");
 scanf("%d",&val);
 ptr=start;
 if(ptr->data==val)
 {start=delete_beg(start);
  return start;
 }
 else
 {
  while(ptr->data!=val)
  {preptr=ptr;
   ptr=ptr->next;
  }
  preptr->next=ptr->next;
  free(ptr);
  return start;
 }//end of else
}

struct node *delete_after(struct node *start)
{struct node *ptr,*preptr;
 int val;
 printf("\nEnter the value after which the node is to b deleted");
 scanf("%d",&val);
 ptr=start;
 preptr=ptr;
 while(preptr->data!=val)
  {preptr=ptr;
   ptr=ptr->next;
  }
  preptr->next=ptr->next;
  if(ptr==start)
   start=preptr->next;
  free(ptr);
  return start;
}

struct node *delete_list(struct node *start)
{struct node *ptr;
 ptr=start;
  while(ptr->next!=start)
     start=delete_end(start);

 free(start);
 return start;
}

struct node *sort_list(struct node *start)
{ struct node *ptr1,*ptr2;
  int temp;
  ptr1=start;
  while(ptr1->next!=start)
  {ptr2=ptr1->next;
   while(ptr2!=start)
   {if(ptr1->data > ptr2->data)
    {temp=ptr1->data;
     ptr1->data=ptr2->data;
     ptr2->data=temp;
    }
    ptr2=ptr2->next;
   }
   ptr1=ptr1->next;
  }
  return start;
}