//yo incomplete cha hai!


#include<stdio.h>
#include<stdlib.h>

//function declaration
void menu();
void create_node();
void insert_begin();
void insert_end();
void insert_pos();  //given position -- agadi, pachadi or bich
void delete_begin();
void delete_end();
void display();
void search();

//define node
struct node{
    int data;
    struct node *next;
};
struct node *head = NULL;

int main(){
    menu();
    return(87);
}

menu(){
    int choice;
    while(1){
        printf("\n Enter: \n1. create \n2. insertion in beginning \n3. insertion in last \n4. insertion in given position \n5.display the values \n0. Exit \n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            create_node();
            break;

            case 2:
            insert_begin();
            break;

            case 3:
            insert_end();
            break;

            case 4:
            insert_pos();
            break;

            case 5:
            display();
            break;

            case 0:
            Exit(0);

            default:
            printf("\nInvalid input\n");
            menu();
        }
    }
}

void create_node(){
    struct node *tmp, *ptr;
    tmp = (struct node*)malloc(sizeof (struct node));   //1 node created
    
    //checking if the pointer has worked or not
    if (tmp == NULL){
        printf("Node not created. Memory Error!");
        menu();
    }
    
    //asking for data for created node
    printf("\n Enter data: \n");
    scanf("%d", &tmp -> data);

    //putting next address as NULL to set for later
    tmp->next = NULL;

    //if this is the first node, then head should point here
    if(head==NULL){
        head=tmp;
    }

    //move ptr to the newly created node 
    else{
        ptr=head;
        while (ptr-> next!=NULL){
            ptr=ptr->next;
        }
        ptr->next=tmp;
    }
}

void insert_begin(){
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));

    //checking if the pointer has worked or not
    if(tmp==NULL){
        printf("\nMemory not allocated.");
        menu();
    }

    //asking for the value in the new node
    printf("\n Enter data: \t");
    scanf("%d", &tmp-> data);

    //next = address rakhney place of new node
    tmp->next=NULL;     

    //if there is no node beforehand
    if(head==NULL){
        head=tmp;
    }

    //if there's already a initial node and we are adding this node in the beginning of that
    else{
        tmp->next=head;
        head=tmp;
    }
}

void insert_end(){
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));

    //checking if the pointer has worked or not
    if(tmp==NULL){
        printf("\nMemory not allocated.");
        menu();
    }

    //asking for the value in the last node
    printf("\n Enter data: \t");
    scanf("%d", &tmp-> data);

    //moving ptr from head to last node, then pointing the last node ko next ko last ma added node ko address
    while(ptr->next!=NULL){
        ptr = ptr->next;
    }

    //aba last ma null nai cha, second lsat ley yo last ko address lai point garyo
    ptr->next = tmp;    
}

void insert_pos(){
    int i,loc,item;
    struct node *tmp;
    tmp=(struct node*)malloc(sizeof(struct node));

    //checking if the pointer has worked or not
    if(tmp==NULL){
        printf("\nMemory not allocated.");
        menu();
    }
    else{
        printf("\nEnter element value");
        scanf("%d",&item);
        tmp->data = item;
        printf("\nEnter the loction after whoch you want to insert");
        scanf("\n%d",&loc);
        
    }

    //asking for the value in the newly created node
    printf("\n Enter data: \t");
    scanf("%d", &tmp-> data);


        
}
