#include<stdio.h>
#include<conio.h>
void main()
{ clrscr();
  int a[100];
  printf("enter the no of element in an array");
  int n=0;
  scanf("%d",&n);
  printf("enter the array element");
   for(int i=0;i<n;i++)
   {
     scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++)
    {
     for(int j=0;j<n-i-1;j++)
     {
       if(a[j]>a[j+1])
       { int t=a[j];
       a[j]=a[j+1];
       a[j+1]=t;
       }}}
    int t=0;
    printf(" enter the element to be searched");
    scanf("%d",&t);
    int host=0;

    int beg=0;
    int lst=n-1;
    while(beg!=lst)
    {
     int mid=beg+lst/2;
     if(a[mid]==t)
    {
     printf("element found");
     host=1;
     break;
     }
     else if(t<a[mid])
     {
      lst=mid;
      }
      else if(t<a[mid])
      {
       beg=mid;

       }
      }
      if(host==0)
      {printf("element not found");
      }
       getch();
       }