#include<stdio.h>
int main()
{
   int n,i,avg,sum=0;
   scanf("%d",&n) ;
   int a[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]) ;
       sum=sum+a[i];
    }
    avg=sum/n;
    printf("%d\n",avg);
    for(i=0;i<n;i++)
    {
        if(avg==a[i])
        {
            printf("%d\n",a[i+1]);
        }

    }
}
