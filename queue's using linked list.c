#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

void insert_last(int);
void delete_front();
void display();

NODE *head=NULL;

int main()
{
    int ch,item;
    while(1)
    {
    printf("******MENU*******\n");
    printf("1.INSERT_FRONT\n2.DELETE_LAST\n3.DISPLAY\n4.EXIT\nENTER YOUR CHOICE: ");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:printf("enter element to be inserted:");
            scanf("%d",&item);
            insert_last(item);
            break;
        case 2:delete_front();
            break;
        case 3:display();
            break;
        case 4:exit(0);
            break;
        default:printf("invalid choice");
    }
}
}

void insert_last(int item)
{
    NODE *temp,*cur;
    temp=(NODE*)malloc(sizeof(NODE));
    temp->data=item;
    if(head==NULL)
        head=temp;
    else
    {
        cur=head;
        while(cur->next!=NULL)
        {
            cur=cur->next;
        }
        cur->next=temp;
    }
    temp->next=NULL;
}

void delete_front()
{
    NODE *temp;
    if(head==NULL)
        printf("queue is empty");
    else{
        temp=head;
        printf("deleted element:%d\n",temp->data);
        head = head->next;
        free(temp);
    }

}

void display()
{
    NODE *temp=head;
    if(head==NULL)
        printf("queue is empty");
    else
    {
        printf("**********QUEUE CONTENT********\n");
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }

    }
}
