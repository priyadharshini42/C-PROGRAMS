#include<stdio.h>
int main()
{
    int n,i,j,GCD,min,max,temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)p
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    min=a[0];
    max=a[n-1];
    printf("\n%d\n%d",min,max);
    for(i=1;i<=min&&i<=max;i++)
    {
        if(min%i==0&&max%i==0)
            GCD=i;
    }
    printf("\n%d",GCD);
    return 0;
}
