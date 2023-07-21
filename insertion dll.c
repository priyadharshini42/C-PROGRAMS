#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next,*prev;
};
struct node *head=NULL,*newnode,*temp;
void createnode()
{
        printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=NULL;
        head=newnode;
}
void insertfirst()
{
        printf("Enter data:");
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->prev=NULL;
        newnode->next=head;
        head=newnode;
}

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d \n",temp->data);
        temp=temp->next;
    }
}
int main()
{
    int choice;
    while(1)
    {
        printf("......Linked list......\n");
        printf("1-Create a node\n2-Insert at Beginning\n3-Display\n");

        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            createnode();
            break;
            case 2:
            insertfirst();
            break;
            case 3:
            display();
            break;
            default:
            printf("Wrong Choice\n");
        }
    }
}
