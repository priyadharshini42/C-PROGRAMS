#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int i,GCD;
    for(i=1;i<a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
            GCD=i;
    }
    printf("%d",GCD);
}
