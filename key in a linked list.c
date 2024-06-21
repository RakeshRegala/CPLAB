#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *head=NULL;

void create();
int searching(int);

int main()
{
    int key,pos;
    printf("create a linked list\n");
    create();
    printf("enter the key\n");
    scanf("%d",&key);
    pos=searching(key);
    if(pos == -1)
    {
        printf("key is not found\n");
    }
    else{
        printf("key is found at %d node",pos);
    }
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

int searching(int key)
{
    NODE *cur=head;
    int pos=1;
    while(cur!=NULL)
    {
        if(cur->data == key)
        {
            return pos;
        }
        else{
            cur=cur->next;
            pos++;
        }
    }
    return -1;
}
