#include<stdio.h>
#include<conio.h>
#include<malloc.h>
void insert(int);
void del(int);
void print();
struct node
{
   int data;
   struct node*next;
};
node* head=NULL;
node* temp=head;
node* temp1=head;
node* temp2=head;
void main()
{
   int ch=0,chi=0,chd=0,chp=0;
   label:
   clrscr();
   printf("\n\t\t**********WELCOME TO THE LINKED LIST WORLD**********");
   printf("\n\t\t1. Enter The Element");
   printf("\n\t\t2. Delete The Element");
   printf("\n\t\t3. Show the list");
   printf("\n\t\t4. Exit");
   printf("\n\n\t\tEnter your choice");
   scanf ("%d",&ch);

    while (ch<=4)
    {
        switch (ch)
        {
          case 1:
	               label1:
		           clrscr();
		           printf("\n1.Enter The Node In The Starting Of The List");
		 		   printf("\n2.Enter The Node In The End Of The List");
		           printf("\n3.Enter The Node In Your Desired Location");
		           printf("\n4.Back To The MainMenue");
		           printf("\nEnter Your Choice");
		           scanf("%d",&chi);
		            while(chi<=4)
		            {

		               switch(chi)
		               {
		                  case 1: insert(1);
			                      goto label1;

		                  case 2: insert(2);
			                      goto label1;

		                  case 3: insert(3);
			                      goto label1;

		                  case 4:goto label;
		               }
		           } break;
               
          case 2:
	                   label2:
		               clrscr();
		               printf("\n1.Delete The Starting Node");
		               printf("\n2.Delete The End Node");
		               printf("\n3.Deleate The Node Of Your Desired Choice");
		               printf("\n4.Back To The MainMenue");
		               printf("\nEnter Your Choice");
		               scanf("%d",&chd);
		                while(chd<=4)
		                {

		                   switch(chd)
		                   {
		                      case 1: del(1);
		                              goto label2;

		                      case 2: del(2);
		                              goto label2;

		                      case 3: del(3);
		                              goto label2;

		                      case 4:goto label;
                           }
		               } break;
              
               case 3:
	                   label3:
	                   clrscr();
	                   printf("\n1.to print the linkedlist");
	                   printf("\n2.back to the main menue");
	                   scanf("%d",&chp);
	                    while(chp<=2)
	                    {
	                       if(chp==1)
	                       {
		                      print();
		                      goto label3;
		                    }
		                   else
		                   {
		                      goto label;

		                   }
	                   } break;

               case 4:
                       clrscr();
                       printf("bye bye see you soon");
                       getch();
                       break;
       } break;
}}
void insert(int i)
{
	 temp=head;
	 temp1=head;
	 temp2=head;
     int n=1,po;
     printf("enter the data to be inserted");
     scanf("%d", &n);
     struct node* p=(struct node*)malloc (sizeof(struct node));
     p->data=n;
      switch(i)
      {
        case 1:
	            if (head==NULL)
	            {
		          p->next=NULL;
		          head=p;
		          temp=p;
	           }
	            else
	            {
		          p->next=head;
		          head=p;
		          temp=p;
		       } break;

	    case 2:
		    while(temp->next!=NULL)
		    {
		      temp=temp->next;
		     }
		    temp->next=p;
		    temp=head;
		    break;

	    case 3:
		    printf("enter the position at which the element to be inserted");
		    scanf("%d",&po);
		     for(int m=0;m<po-2;m++)
		     {
		       temp=temp->next;
		     }
		     temp1=temp->next;
		     temp->next=p;
		     p->next=temp1;
		     temp=head;
		     temp1=head;
		     break;

     }
}

void del(int d)
{
	 temp=head;
	 temp1=head;
	 temp2=head;
    int p;
    switch(d)
    {
      case 1: head=head->next;
		  free(temp);
		  temp=head;
		  temp1=head;
		  break;

      case 2:  while (temp->next!=NULL)
		   {
		     temp=temp->next;
		   }
			 temp1=temp;
			 temp=head;
		   while(temp->next!=temp1)
		   {
		     temp=temp->next;
		   }
			temp->next=NULL;
			free(temp1);
		temp=head;
		temp1=head;
	       break;
      case 3:
	      printf("enter the position at which the no is to be deleated");
	      scanf("%d",&p);
	      for(int m=0;m<p-2;m++)
	      {
	       temp=temp->next;
	       }
	       temp1=temp->next;
	       temp2=temp1->next;
	       temp->next=temp2;
	       free(temp1);
	       temp=head;
	       temp1=head;
	       temp2=head;
	       break;

     }

}

void print()
{
	 temp=head;
	 temp1=head;
	 temp2=head;
     while(temp->next!=NULL)
     {
      printf("%d",temp->data);
      printf("\n");
      temp=temp->next;
     }
     printf("%d",temp->data);
     getch();
 }
