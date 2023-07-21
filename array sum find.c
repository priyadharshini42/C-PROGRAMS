#include<stdio.h>
int main()
{
int n,i,flag=0;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);

}
int sum;
scanf("%d",&sum);
for(i=0;i<n;i++)
{
  if (a[i]+a[i+1]==sum)
  {
     flag=1;
  }

}
if(flag==1)
{
    printf("true");
}
else
{
    printf("false");
}
return 0;
}
