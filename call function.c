#include<stdio.h>
int main()
{
int a,b;
printf("enter the value for a and b: ");
scanf("%d %d",&a,&b);
sum(a,b);
printf("%d %d",a,b);
}

int sum(int m,int n)
{
m=m+5;
n=n+5;

int c;
c=m+n;
printf("in sum func: %d\n",c);

}
