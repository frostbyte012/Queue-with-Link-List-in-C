#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct Node
{
	int Data;
	struct Node *next;
};
struct Node *front,*temp,*rear,*new_node;
int ct=0;
void Enque();
void Deque();
void Display();
void Peek();
void main()
{
	front=rear=temp=new_node=NULL;
	int choice;
	while(1)
	{
		printf("\n Enter your choice\n");
		printf("\n 1.ENQUE \n");
		printf("\n 2.DEQUE \n");
		printf("\n 3.PEEK \n");
		printf("\n 4.DISPLAY \n");
		printf("\n 5.EXIT \n");
		scanf(" %d",&choice);
		switch(choice)
		{
			case 1:
			      Enque();
				  break;
		    case 2:
			      Deque();
				  break;
		    case 3:
			     Peek();
				 break;
		    case 4:
			     Display();
				 break;
		    case 5:
			     exit(1);
				 break;
		    default :
			     printf("\n Sorry Wrong choice !!!\n");	  
		}
	}
}
void Enque()
{
	
	new_node=(struct Node*)malloc(sizeof(struct Node));
    printf("\nEnter Your Data \n");
    scanf(" %d",&new_node->Data);
	if(ct==0)
    {
	  front=new_node;
	  rear=new_node;
    }
	else
    rear->next=new_node;
	rear=new_node;
	new_node->next=NULL;
	ct++;
    
}
void Deque()
{
	if(ct==0)
	 printf("\nQueue UnderFlow\n");
	else
	{
	 printf("\nDequed Data :- %d \n",front->Data);
	 temp=front;
	 front=front->next;
	 temp=NULL;
	 free(temp);
	 temp=front;
	 ct--;
    }
}
void Display()
{
    if(ct==0)
      printf("\n Queue UnderFlow\n");
	else
	{
	  temp=front;
	  printf("\n Your Data :- \n");
	  while(temp!=NULL)
	  {
		printf(" %d ",temp->Data);
		temp=temp->next;
	  }  
	  printf("\n");
    }
}
void Peek()
{
	if(ct==0)
      printf("\n Queue UnderFlow\n");
	else
	  printf(" %d ",front->Data);
}
	  

