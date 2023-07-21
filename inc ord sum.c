#include<stdio.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    int a[i];
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            sum=a[i]+a[i+1];
        }
    }
        if(sum>a[n-1])
        {

    printf("%d",sum);
        }
    return 0;
}
