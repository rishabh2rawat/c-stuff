#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
 int n=0;
 clrscr();
 printf("enter the element whoose factorial is to be found");
 scanf("%d",&n);
 int f=fact(n);
 printf("%d",f);
 getch();
 }
 int fact(int n)
  {
   if(n==0)
   {return 1;}
   else
   {
   return(n * fact(n-1));
   }
 }