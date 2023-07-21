#include<stdio.h>
int main()
{
    int i,j,n,a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>=a[j])
            {
                int temp;
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;

            }
        }
        printf("%d",a[i]);
    }

    return 0;
}

