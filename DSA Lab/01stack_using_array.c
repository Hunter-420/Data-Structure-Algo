#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int top=-1;

int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isFull()
{
    if (top==MAX-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

void push(int stack[],int element)
{
    if(isFull()==1)
    {
        printf("stack overflow");
    }
    else
    {
        top++;
        stack[top]=element;
        printf("Push : %d\n",stack[top]);

    }
}

void pop(int stack[])
{
    if(isEmpty()==1)
    {
        printf("stack underflow");
    }
    else
    {
        printf("Pop : %d\n",stack[top]);
        top--;
    }
}

void display(int stack[])
{
   if (isEmpty()==1)
   {
    printf("stack is empty\n");
   }
   else
   {
     printf("\n\nElements in stack : \n");
    for(int i=top;i>-1;--i)
    {
        printf("%d\n",stack[i]);
    }
   }
   
}


int main()
{
    int stack[MAX];
    int choice;
    int element;

    while (1)
    {
        printf("\n\nChoose what do you want to do :\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Element :");
                scanf("%d",&element);
                push(stack,element);
                break;
            case 2:
                pop(stack);
                break;
            
            case 3:
                display(stack);
                break;

            case 4:
                exit(0);
                break;
        }
    }
    
    return 0;
}