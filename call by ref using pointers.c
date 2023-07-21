#include<stdio.h>
int main()
{
int a,b,*a1,*b1;
printf("enter the value for a and b: ");
scanf("%d %d",&a,&b);
a1=&a;
b1=&b;
sum(a1,b1);
printf("%d %d",a,b);

}

int sum(int *m,int *n)
{
*m=*m+5;
*n=*n+5;
printf("in sum func: %d\n",*m);
printf("in sum func: %d\n",*n);



}

