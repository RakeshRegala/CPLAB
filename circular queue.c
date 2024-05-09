#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int queue[MAX];
int front=-1;
int rear=-1;

void insert(int);
void delete();
void display();

int main()
{
    int ch,item;
    while(1)
    {
        printf("******MENU*******\n");
        printf("1.INSERT\n2.DELETE\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter element to be inserted:");
                scanf("%d",&item);
                insert(item);
                break;
            case 2:delete();
                 break;
            case 3:display();
                break;
            case 4:exit(0);
                break;
            default:printf("invalid choice");
        }
    }
}


void insert(int item)
{
    if((rear+1)%MAX==front)
        printf("queue is full\n");
    else
    {
        if(front==-1)
        {
            rear=front=0;
            queue[rear]=item;
        }
       
        else
        {
            rear=(rear+1)%MAX;
            queue[rear]=item;
        }
            

    }
}


void  delete()
{
    if(front==-1)
        printf("queue is empty");
    else{
        printf("deleted element: %d ",queue[front]);
        if(rear==front)
            rear=front=-1;
        else
            front=(front+1)%MAX;
           

    }
}


void display()
{
    int i;
    if(front==-1) 
        printf("Queue is empty\n");
    else
    {
        printf("Queue content:\n");
        if(front<=rear) 
        {
            for(i=front; i<=rear; i++)
                printf("%4d", queue[i]);
        }
        else
        {
            for(i=front; i<=MAX-1; i++)
                printf("%4d", queue[i]);
            for(i=0; i<=rear; i++)
                printf("%4d", queue[i]);
        }
    }
}
