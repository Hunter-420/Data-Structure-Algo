    #include<stdio.h>
    #include<stdlib.h>

    struct Stack
    {
        int total_size;
        int top;
        int *stack;
    };

    int isEmpty(struct Stack *s)
    {
        if(s->top==-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    int isFull(struct Stack *s)
    {
        if(s->top==s->total_size-1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }

    void push(struct Stack *s,int element)
    {
        if(isFull(s)==1)
        {
            printf("stack overflow\n");
        }
        else
        {
            s->top++;
            s->stack[s->top]=element;
            printf("push : %d\n",s->stack[s->top]);
        }
    }

    void pop(struct Stack *s)
    {
        if(isEmpty(s)==1)
        {
            printf("stack underflow\n");
        }
        else
        {
            printf("push : %d\n",s->stack[s->top]);
            s->top--;
        }
    }

    int main()
    {
        struct Stack *s;
        int choice;
        /* s=(int*)malloc(s->total_size*sizeof(int)); */

        s->total_size=10;
        s->top=-1;
        s->stack=(int*)malloc(s->total_size*sizeof(int));
        printf("What do you want to do :\n1.Push operation\n2.Delete operation\n3.Peak operation\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            push(s,5);
            break;
        case 2:
            pop(s);
            break;
        
        default:
            break;
        }
    }