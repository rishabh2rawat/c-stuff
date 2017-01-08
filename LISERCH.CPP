#include<stdio.h>
#include<conio.h>
#include<malloc.h>

void main()
{
 int n=0;
 printf("enter the no of element in an array");
 scanf("%d",&n);
 int a[100];
 printf("enter the array element");
 for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
    }
    printf("enter the element to be searched");
    int t=0;
    int flag=0;
    scanf("%d",&t);
    for( i=0;i<n;i++)
    {
     if(t==a[i])
     {
      flag=1;
      break;
      }
      }
      if(flag==1)
      {printf("element foi=und");
      }
      else
      {
      printf("element not foound");
      }
      getch();
      }