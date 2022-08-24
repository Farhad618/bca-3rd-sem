#include<stdio.h>
#include<conio.h>
#include<process.h>


del_at_begin(int [],int);
del_at_mid(int [],int);
del_at_last(int [],int);
//void insert(int a[],int);
void main()
{
int a[30],i,pos,len,choice;
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
printf("\n\tEnter 1 for delet at beginning");
printf("\n\tEnter 2 for delet at any location");
printf("\n\tEnter 3 for delet at last");
printf("\n\tEnter 4 for exit");
printf("\n***********~~~~~~~~~~~~~~~~~*********\n\n");

printf("\nEnter your choice:");
scanf("%d",&choice);



switch(choice)
 {case 1 : del_at_begin(a,len);
	   break;

  case 2 : del_at_mid(a,len);
	   break;

  case 3 : del_at_last(a,len);
	   break;

  case 4 : exit(0);

  default : printf("\nInvalid choice.");
	   break;
 }//end of switch
getch();
}//end of while

}

 del_at_begin(int a[],int len)
 {int i;
  for(i=0;i<len-1;i++)
   a[i]=a[i+1];

   for(i=0;i<len-1;i++)
      printf("\t%d",a[i]);

 }

 del_at_mid(int a[],int len)
 { int i,pos;
   printf("\nEnter the position u want to delet:");
   scanf("%d",&pos);

   if(pos<=len)
   {
   for(i=pos-1;i<len-1;i++)
      a[i]=a[i+1];


   for(i=0;i<len-1;i++)
      printf("\t%d",a[i]);
   }
   else
   {printf("\nOutside the array");
    exit(0);
   }

 }

 del_at_last(int a[],int len)
 {int i;

   for(i=0;i<len-1;i++)
      printf("\t%d",a[i]);

 }