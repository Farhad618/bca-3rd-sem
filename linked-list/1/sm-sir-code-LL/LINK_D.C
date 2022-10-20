//for doubly linked list
#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{int data;
 struct node *next;
 struct node *prev;
};

struct node *start=NULL;
struct node *create_dll(struct node *);
struct node *display(struct node *);
struct node *insert_beg(struct node *);
struct node *insert_end(struct node *);
struct node *insert_before(struct node *);
struct node *insert_after(struct node *start);
struct node *insert_pos(struct node *start);
struct node *delete_beg(struct node *);
struct node *delete_end(struct node *);
struct node *delete_before(struct node *);
struct node *delete_after(struct node *);
struct node *delete_pos(struct node *);
struct node *delete_list(struct node *start);
struct node *sort_list(struct node *start);

void main()
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
  printf("\n9.Deletion of a node before a given node");
  printf("\n10.Deletion of a node after a given node");
  printf("\n11.Deletion of the list");
  printf("\n12.Sorting of the linked list");
  printf("\n13.exit");
  printf("\n14.Deletion of an element from a specific position:");
  printf("\n15.Insertion of an element from a specific position:");
  printf("\nEnter ur choice:");
  scanf("%d",&choice);

  switch(choice)
  {case 1: start=create_dll(start);
	   printf("\nDoubly linked list created");
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
   case 9: start=delete_before(start);
	   break;
   case 10: start=delete_after(start);
	   break;
   case 11: start=delete_list(start);
	    printf("\nDoubly Linked list deleted");
	    break;
   case 12: start=sort_list(start);
	    break;
   case 13: exit(0);
   case 14: start=delete_pos(start);
	    break;
   case 15: start=insert_pos(start);
	    break;
   default : printf("\nInvalid choice");
	     break;

  }//end of switch

   getch();

 }//end of while


}//end of main

struct node *create_dll(struct node *start)
{struct node *new_node,*ptr;
 int num;
 printf("\nEnter -1 to end");
 printf("\nEnter data:");
 scanf("%d",&num);
 while(num!=-1)
 {

  if(start==NULL)
  {new_node=(struct node*)malloc(sizeof(struct node));
   new_node->prev=NULL;
   new_node->data=num;
   new_node->next=NULL;
   start=new_node;
  }
  else
  {ptr=start;
   new_node=(struct node*)malloc(sizeof(struct node));
   new_node->data=num;

   while(ptr->next!=NULL)
     ptr=ptr->next;

   ptr->next=new_node;
   new_node->prev=ptr;
   new_node->next=NULL;
  }
  printf("\nEnter the data:");
  scanf("%d",&num);
 }//end of while
 return start;
}

struct node *display(struct node *start)
{struct node *ptr;
 ptr=start;
 while(ptr!=NULL)
 { printf("\t%d",ptr->data);
   ptr=ptr->next;
 }
 return start;
}

struct node *insert_beg(struct node *start)
{struct node *new_node;
 int num;
 printf("\nEnter the data:");
 scanf("%d",&num);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;

 start->prev=new_node;
 new_node->next=start;
 new_node->prev=NULL;
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

 while(ptr->next!=NULL)
 ptr=ptr->next;
 ptr->next=new_node;
 new_node->prev=ptr;
 new_node->next=NULL;
 return start;
}

struct node *insert_before(struct node *start)
{struct node *new_node,*ptr;
 int num,val;
 printf("\nEnter the data:");
 scanf("%d",&num);
 printf("\nEnter the value before which the data has to b inserted");
 scanf("%d",&val);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;
 while(ptr->data!=val)
 {  ptr=ptr->next;
 }

 new_node->next=ptr;
 new_node->prev=ptr->prev;
 ptr->prev->next=new_node;
 ptr->prev=new_node;
 return start;
}

struct node *insert_after(struct node *start)
{struct node *new_node,*ptr;
 int num,val;
 printf("\nEnter the data:");
 scanf("%d",&num);
 printf("\nEnter the value after which the data has to b inserted");
 scanf("%d",&val);
 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;

 while(ptr->data!=val)
 {ptr=ptr->next;
 }
 new_node->prev=ptr;
 new_node->next=ptr->next;
 ptr->next->prev=new_node;
 ptr->next=new_node;

 return start;
}
struct node *insert_pos(struct node *start)
{struct node *new_node,*ptr;
 int num,pos,count=1;
 printf("\nEnter the data:");
 scanf("%d",&num);
 printf("\nEnter the position where it has to b inserted");
 scanf("%d",&pos);

 new_node=(struct node *)malloc(sizeof(struct node));
 new_node->data=num;
 ptr=start;
 while(count!=pos)
 {
    count++;
    ptr=ptr->next;
 }

 new_node->next=ptr;
 new_node->prev=ptr->prev;
 ptr->prev->next=new_node;
 ptr->prev=new_node;
 return start;
}

struct node *delete_beg(struct node *start)
{ struct node *ptr;
  ptr=start;
  start=start->next;
  start->prev=NULL;

  free(ptr);
  return start;
}

struct node *delete_end(struct node *start)
{struct node *ptr;
 ptr=start;
 while(ptr->next!=NULL)
 { ptr=ptr->next;
 }
 ptr->prev->next=NULL;
 free(ptr);
 return start;
}

struct node *delete_before(struct node *start)
{struct node *ptr,*temp;
 int val;
 printf("\nEnter the value of the node before which is to b deleted");
 scanf("%d",&val);
 ptr=start;

  while(ptr->data!=val)
  { ptr=ptr->next;
  }
 temp=ptr->prev;
  if(temp==start)
    start=delete_beg(start);
  else
  {ptr->prev=temp->prev;
   temp->prev->next=ptr;
  }

  free(temp);
  return start;

}

struct node *delete_after(struct node *start)
{struct node *ptr,*temp;
 int val;
 printf("\nEnter the value after which the node is to b deleted");
 scanf("%d",&val);
 ptr=start;

 while(ptr->data!=val)
  {ptr=ptr->next;
  }
  temp=ptr->next;
  ptr->next=temp->next;
  temp->next->prev=ptr;

  free(temp);
  return start;
}

struct node *delete_pos(struct node *start)
{struct node *ptr;
 int count=1,pos;
 printf("\nEnter the position:");
 scanf("%d",&pos);
 ptr=start;
 while(count!=pos)
  { ptr=ptr->next;
    count++;
  }
 ptr->prev->next=ptr->next;
 ptr->next->prev=ptr->prev;

 free(ptr);
 return start;
}

struct node *delete_list(struct node *start)
{while(start!=NULL)
  start=delete_beg(start);
 return start;
}

struct node *sort_list(struct node *start)
{ struct node *ptr1,*ptr2;
  int temp;
  ptr1=start;
  while(ptr1->next!=NULL)
  {ptr2=ptr1->next;
   while(ptr2!=NULL)
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