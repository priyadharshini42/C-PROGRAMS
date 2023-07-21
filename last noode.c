#include<stdio.h>
int main()
{
 int i,n;
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     int a[n];
     scanf("%d",&a[i]);
     if(i%2!=0)
     {
         printf("%d ",a[i]);
     }
 }
 return 0;
}

