#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void push();
void pop();
void show();


struct node
{
    int data;
   struct node* next;
};
node* head=NULL;
node* temp=head;
node* temp1=head;

void main()
{
	int ch=0;
	label:
	clrscr();
	printf("welcome to the queu implimentation using linked list\n");
	printf("1.enter the element INSERTION\n");
	printf("2.delete a element DELETION\n");
    printf("3.print the QUEU\n");
    printf("4.exit\n");
    scanf("%d",&ch);

    while(ch<=4)
    {
	switch(ch)
	{
		case 1:
			push();
			goto label;

		case 2:
			pop();
			goto label;

		case 3:
			show();
			goto label;

		case 4:
			printf("bye bye see you soon");
			break;

	}
	break;
    }

}
void push()
{
	int n=0;
	printf("enter the element to be inserted");
	scanf("%d",&n);
    struct node* p=(struct node*)malloc (sizeof(struct node));
    p->data=n;

     if(head==NULL)
     {
	p->next=NULL;
	head=p;
	temp=head;
     }
     else
     {
	   p->next=head;
       head=p;
       temp=head;
     }
}

void pop()
{

    if(head==NULL)
    {
	printf("underFlow no more item to delete");
	getch();
    }
    if(head->next==NULL)
    {
    temp=head;
    head=NULL;
    free(temp);
    temp=head;
    }
    else
    {
    temp=head;
    temp1=head;
    while(temp->next!=NULL)
    {
	temp=temp->next;

    }
    while(temp1->next!=temp)
    {
	temp1=temp1->next;
    }
    temp1->next=NULL;
    free(temp);
    temp=head;
    temp1=head;
     }
}
void show()
{
    temp=head;
    while(temp->next!=NULL)
    {
	printf("%d",temp->data);
	printf("\n");
	temp=temp->next;
    }
    printf("%d",temp->data);
    getch();
}