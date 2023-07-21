#include<stdio.h>
int main()
{
   int i,n,sum1=0,sum2=0,sub;
   scanf("%d",&n);
   int a[n];
for(i=0;i<n-1;i++)
{
    scanf("%d",&a[i]);
   sum2=sum2+a[i];
}
for(i=1;i<=n;i++)
{
    sum1=sum1+i;
}
sub=sum1-sum2;
printf("%d",sub);
return 0;
}
