#include<stdio.h>
#include<stdlib.h>
void create();
void display();
void insertatF();
void count();
void insertatend();
void insertatmid();
void removeatfront();
void removeatend();
void removeatmid();
struct node
{
    int data;
    struct node*next;
}*head,*temp,*newnode,*nextnode;
int main()
{
    int option;
    while(1)
    {
        printf("1:create");
        printf("\n 2:display");
        printf("\n 3:count");
        printf("\n 4:insert at first");
        printf("\n 5:insert at end");
        printf("\n 6:insert at middle");
        printf("\n 7:remove@front");
        printf("\n 8:remove@end");
        printf("\n 9:removeatmid");
        printf("\n 10:exit");
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
            count();
            break;
        case 4:
            insertatF();
            break;
        case 5:
            insertatend();
            break;
        case 6:
            insertatmid();
            break;
        case 7:
            removeatfront();
            break;
        case 8:
            removeatfront();
            break;
        case 9:
            removeatmid();
            break;
        default:
            printf("Invalid option");
            break;
        }
    }
    return 0;
}

void create()
{
    int n,i;
    printf("enter memory size:");
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
        printf("\n %d ",temp->data);
        temp=temp->next;
    }
}
void count()
{
    int count=0;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        count++;
    }
    printf("\n count:%d",count);
}
void insertatF()
{
    temp=head;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=temp;
    head=newnode;
    temp=newnode;
}
void insertatend()
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
}

void insertatmid()
{
    int position;

    newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data:");
    scanf("%d",&newnode->data);
    scanf("%d",&position);
    temp=head;
    for(int j=1; j<position; j++)
    {
        temp=temp->next;
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
void removeatfront()
{
    temp=head;

    if(temp->next==NULL)
    {

        head=NULL;
    }
    else
    {
        head=temp->next;
        temp->next=NULL;
        free(temp);
    }
}
void removeatend()
{
    temp=head;

    if(temp->next==NULL)
    {

        head=NULL;
    }
    else
    {
        head=temp->next;
        temp->next=NULL;
        free(temp);
    }
}
void removeatmid()
{
    int position;
    int k=1;
    scanf("%d",&position);
    temp=head;
    while(k<position)
    {
        temp=temp->next;
        k++;
    }
    nextnode=temp->next;
    temp->next=newnode->next;
    free(nextnode);
}
