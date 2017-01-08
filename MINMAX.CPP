#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[100];
int n,pmax=0,pmin=0;
printf("enter the no of array element");
scanf("%d",&n);
printf("enter the array element");
 for(int i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 int max=a[0];
 int min=a[0];
 for(int j=0;j<n;j++)
   {
    if(a[j]>max)
    {
     max=a[j];
     pmax=j;
     }
     if(a[j]<min)
     {
     min=a[j];
     pmin=j;
     }
    }
    printf("the maximum no in the array list is%d ",max);
    printf("\n at position %d",pmax+1);
    printf("\n the minimum no in the array list is%d ",min);
    printf("\n at position %d",pmin+1);
    getch();
  }
