#include<stdio.h>
#include<stdlib.h>
#define size 5
void push();
void pop();
int main()
{

int arr[size];
int top=-1;
void push()
{
    int a;
    if(top==size-1)
    {
        printf("stack is full");
    }
    else{
        top++;
        scanf("%d",&a);
        arr[top]=a;

    }
}
void pop()
{
    if(top==-1){
        printf("underflow");
    }
    else{
        printf("%d is deleted",arr[top]);
    }
}
}
