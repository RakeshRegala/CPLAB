#include<stdio.h>
#include<stdlib.h>
#define MAX 10
char stack[MAX];
int top=-1;

void reverse(char []);
void push(char);
char pop();


int main()
{
    char str[50];
    printf("Enter the expression ");
    gets(str);
    printf("After reversal:\n");

    reverse(str);
}

void reverse(char str[])
{
    char ch;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        ch=str[i];
        push(ch);
    }
    for(i=top;i>=0;i--)
    {
        printf("%c",pop());
    }
}

void push(char ch)
{
    stack[++top]=ch;
}

char pop()
{
   return stack[top--];
}
