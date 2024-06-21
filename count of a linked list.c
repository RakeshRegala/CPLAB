#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

void create();
int count();

NODE *head=NULL;

int main()
{
    printf("create the linked list\n");
    create();
    printf("the count is %d",count());
}

void create()
{
    NODE *cur,*temp;
    int item,ch;
    do
    {
        printf("enter the item");
        scanf("%d",&item);
        temp=(NODE*)malloc(sizeof(NODE));
        temp -> data=item;
        
        if(head == NULL)
        {
            head = cur = temp;
        }
        else
        {
            cur->next=temp;
            cur = temp;
        }
        printf("DO YOU WANT TO CONTINUE(1  for yes):\n");
        scanf("%d",&ch);
    }while(ch == 1);
    temp -> next=NULL;
}


int count()
{
    int c=0;
    NODE *cur=head;
    while(cur!=NULL)
    {
        c++;
        cur=cur -> next;
    }
    return c;
}
