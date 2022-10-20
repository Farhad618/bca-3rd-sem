#include<stdio.h>
#include<conio.h>

void main()
{int a[20],i,j,n,key;

 printf("\nEnter elements to sort:");
 scanf("%d",&n);
 printf("\nEnter elements:");
 for(i=0;i<n;i++)
 {printf("\na[%d]:",i);
  scanf("%d",&a[i]);
 }
 for(i=1;i<n;i++)
 {j=i-1;
  key=a[i];
  while(key<=a[j] && j>=0)
  {a[j+1]=a[j];
   a[j]=key;
   j--;
  }
 }
 printf("\nThe sorted element is:");
 for(i=0;i<n;i++)
  printf("\t%d",a[i]);
 getch();
}