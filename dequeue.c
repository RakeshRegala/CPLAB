#include<stdio.h>
#include<stdlib.h>

#define MAX 50
int dequeue[MAX];
int front=-1;
int rear=-1;

void delete_front()
{
	if(front==-1)
	{
		printf("dequeue is eampty");
	}
	else
	{
		printf("%d",dequeue[front]);
		if(front==rear)                   /*only one element*/
			front=rear=-1;
		else
			front=(front+1)%MAX;
	}
}

void delete_rear()
{
	if(front==-1)
		printf("dequeue is empty");
	else
	{
		printf("deleted element:%d",dequeue[rear]);
		if(front==rear)
			rear=front=-1;
		else if(rear=0)
			rear=MAX-1;
		else
			rear--;
	}
}


void insert_front(int item)
{
	if(front==(rear+1)%MAX)
	{
		printf("dequeue is full");
	}
	else if(front==0)
	{
		front=MAX-1;
		dequeue[front]=item;
	}
	else if(front==-1)
	{
		front=rear=0;
		dequeue[front]=item;
	}
	else
	{
		front--;
		dequeue[front]=item;	
	}
}
void insert_rear(int item)
{
	if((rear+1)%MAX==front)
		printf("dequeue is full");
	else
	{
		if(rear==-1)
		{
			rear=0;
			dequeue[rear]=item;
		}
		else
		{
			rear=(rear+1)%MAX;
			dequeue[rear]=item;
		}
	}
}

void display()
{
	int i=front;
	printf("dequeue content:\n");
	if(front==-1)
		printf("LIST IS EMPTY");
	else
	{
		while(i!=rear)
		{
			printf("%d	",dequeue[i]);
			i=(i+1)%MAX;
		}
		printf("%d	",dequeue[rear]);
	}
}



int main()
{
	int item,ch;
	while(1)
	{
		printf("\n**MENU*\n");
		printf("\n1.INSERT FRONT\n2.INSERT REAR\n3.DELETE FRONT\n4.DELETE REAR\n5.DISPLAY\n6.EXIT");
		printf("\nENTER USER'S CHOICE");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("ENTER ELEMENT TO BE INSERTED");
				scanf("%d",&item);
				insert_front(item);
				break;
			case 2:printf("\nENTER ELEMENT TO BE INSERTED AT REAR");
				scanf("%d",&item);
				insert_rear(item);
				break;
			case 3:delete_front();
				break;
			case 4:delete_rear();
				break;
			case 5:display();
				break;
			case 6:exit(0);
			default:printf("enter valid choice");
		}
	}
}
