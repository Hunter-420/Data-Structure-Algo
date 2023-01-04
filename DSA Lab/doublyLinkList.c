#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert_begening()
{
    int temp;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    printf("Insert Data : ");
    scanf("%d",&temp);
    newNode->data = temp;
    newNode->next =head;
    newNode->prev=head;
    head = newNode;
}

void insert_end()
{
    int tem;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    temp=head;
    if (head==NULL)
    {
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data = tem;
        newNode->next =head;
        head = newNode;
    }
    
    else
    {
        printf("\n\nElements in List :\n");
        while (temp->next!=NULL)
        {
            temp = temp->next;
        }
        
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data=tem;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void insert_between()
{
    int index,i=1,tem;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    temp=head;
    printf("\nAt which index you want to insert node : ");
    scanf("%d",&index);

    while (i<index-1)
    {
        temp=temp->next;
        i++; 
    }
    
    if (temp->next==NULL)
    {
        printf("\nIndex not founded\n");
    }
    else
    {
        printf("Insert Data : ");
        scanf("%d",&tem);
        newNode->data=tem;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    
}
void display()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp=head;
    if (temp==NULL)
    {
        printf("\nList is Empty\n");
    }
    
    else
    {
        printf("\n\nElements in List :\n");
        while (temp!=NULL)
        {
            printf("%d\t",temp->data);
            temp = temp->next;
        }
        printf("\n");
        
    }
}

void display_backward()
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    temp=head;
    if (temp==NULL)
    {
        printf("\nList is Empty\n");
    }
    
    else
    {
        printf("\n\nElements in List :\n");
        while (temp->next!=NULL)
        {
            //printf("%d\t",temp->data);
            temp = temp->next;
            //ptr=temp->prev;
        }
        //ptr=temp->prev;
         while (ptr->prev!=NULL)
        {
            printf("%d\t",ptr->data);
            ptr = ptr->prev;
        }
        printf("\n");
        
    }
}

void delete_first_node()
{
    if (head==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp = head;
        head=temp->next;
        free(temp);
        
    }
    
}

void delete_last_node()
{
    if (head==NULL)
    {
        printf("\nList is Empty\n");
    }
    else
    {
        struct node *temp = (struct node *)malloc(sizeof(struct node));
        temp=head;
        while (temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=NULL;
        
    }  
}

void delete_specific_node()
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    ptr=head;
    int position;
    printf("\nEnter Node position to delete :  ");
    scanf("%d",&position);
    for (int i = 1; i < position-1; i++)
    {
        temp=ptr;
        ptr=ptr->next;
        
    }
    temp->next=ptr->next;
    
    
}

int main()
{
    while (1)
    {
        int choice;
        printf("\n\nWhat do you want to do : \n1. Insert at begening\n2. Insert at End\n3. Insert between Node\n4. Display \n0. Exit\n\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            insert_begening();
            break;
        case 2:
           // insert_end();
            break;
        case 3:
           // insert_between();
            break;
        case 4:
            display();
            break;
        case 5:
           // delete_first_node();
            break;
        case 6:
          //  delete_last_node();
            break;
        case 7:
           // delete_specific_node();
            break;
        case 8:
            display_backward();
            break;
        default:
        printf("\nInvalid choice\n");
            break;
        }
    }
    

}