#include<stdio.h>
int main()
{
int n,sum,res=0;
scanf("%d",&n);
int i;
for(i=1;i<=n;i++)
{
  sum=n-i;
  res=sum+res;
}
printf("%d",res);
}
