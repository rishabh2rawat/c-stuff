#include<stdio.h>
#include<conio.h>
void  fibbo(int);
void main()
{
	int n=0;
	clrscr();
	printf("enter the no of term till you want to print the fibbonacci series");
	scanf("%d",&n);
	fibbo(n);

}
void fibbo(int n)
{
static int a=0;
static int b=1;
static sum=0;
if(n>0)
{
sum=a+b;
a=b;
b=sum;
printf("%d",sum);
printf("\n");
fibbo(n-1);
}
getch();
}