#include<stdio.h>
#include<stdlib.h>
struct node
{
   int data;
   struct node *next;
}*head,*newnode ,*temp;
int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
        count++;
    }
    printf("\n");
    printf("%d",count);
    return 0;
}
