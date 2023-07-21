#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertatfirst();
struct node
{
    int data;
    struct node*next;
}*head=NULL,*temp,*newnode;
int main()
{
    int option;
    while(1)
    {
        printf("1-create");
        printf("\n 2-display");
        printf("\n 3-insert at first");
scanf("%d",&option);
switch(option)
{
case 1:
    create();
    break;
case 2:
    display();
    break;
case 3:
    insertatfirst();
    break;
default:
    printf("invalid option");
    break;
}}}
void create()
{
    int n,i;
    printf("memory size:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("enter data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
    }
}
void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf(" %d",temp->data);
        temp=temp->next;

    }
}
void insertatfirst()
{

    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    head=newnode;
    temp=newnode;
}
