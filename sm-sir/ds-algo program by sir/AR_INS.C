#include<stdio.h>
#include<conio.h>
#include<process.h>


ins_at_begin(int [],int,int);
ins_at_mid(int [],int,int);
ins_at_last(int [],int,int);
//void insert(int a[],int);
void main()
{
int a[30],i,pos,num,len,choice;
clrscr();

printf("\nthe length of array is=");
scanf("%d",&len);
printf("\nthe elements of array are=");
for(i=0;i<len;i++)
scanf("%d",&a[i]);

printf("\nthe array is=");
for(i=0;i<len;i++)
printf("\t%d",a[i]);


while(1)
{
printf("\n\n***********~~~~~~~~~~~~~~~~~*********");
printf("\n\tEnter 1 for insert at beginning");
printf("\n\tEnter 2 for insert at any location");
printf("\n\tEnter 3 for insert at last");
printf("\n\tEnter 4 for exit");
printf("\n***********~~~~~~~~~~~~~~~~~*********\n\n");

printf("\nEnter your choice:");
scanf("%d",&choice);



switch(choice)
 {case 1 :printf("\nEnter the no. u want to insert:");
	  scanf("%d",&num);
	  ins_at_begin(a,len,num);
	   break;

  case 2 : printf("\nEnter the no. u want to insert:");
	   scanf("%d",&num);
	   ins_at_mid(a,len,num);
	   break;

  case 3 : printf("\nEnter the no. u want to insert:");
	   scanf("%d",&num);
	   ins_at_last(a,len,num);
	   break;

  case 4 : exit(0);

  default : printf("\nInvalid choice.");
	   break;
 }//end of switch
getch();
}//end of while

}

 ins_at_begin(int a[],int len,int num)
 {int i;
  for(i=len-1;i>=0;i--)
   a[i+1]=a[i];
   a[0]=num;

   for(i=0;i<=len;i++)
      printf("\t%d",a[i]);

 }

 ins_at_mid(int a[],int len,int num)
 { int i,pos;
   printf("\nEnter the position u want to insert at:");
   scanf("%d",&pos);
   pos--;

   if(pos<=len)
   {
   for(i=len-1;i>=pos;i--)
      a[i+1]=a[i];
   a[pos]=num;

   for(i=0;i<=len;i++)
      printf("\t%d",a[i]);
   }
   else
   printf("\nOutside the array");

 }

 ins_at_last(int a[],int len,int num)
 {int i;
   a[len]=num;

   for(i=0;i<=len;i++)
      printf("\t%d",a[i]);

 }

/*insert(a,len);

void insert(int a[],int len)
{
printf("\nthe number which is to be inserted is=");
scanf("%d",& num);
printf("\nthe position at which no. is going to be inserted=");
scanf("%d", & pos);
--pos;


if(pos<len)
{
for(i=len;i>=pos;i--)
a[i+1]=a[i];
a[pos]=num;
len++;
}
else
printf("\n outside the array");


printf("\nthe new array is=");
for(i=0;i<len;i++)
printf("\t%d", a[i]);
} */