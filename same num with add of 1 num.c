#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int count=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if((i%2!=0)&&(j==n))
               {
                   count++;
               }
               else if((i%2==0)&&(j==1))
               {
                   count++;
               }
            //printf("%d",i);
        }
        //printf("\n");
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}

