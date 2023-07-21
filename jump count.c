#include<stdio.h>
int main()
{
    int n,count;
    scanf("%d",&n);
    if(n%2==0)
    {
        count=n/2;
        printf("%d",count);
    }
    else
    {
        count=(n+1)/2;
        printf("%d",count);
    }
    return 0;
}
