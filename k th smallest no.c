#include<stdio.h>
int main()
{
    int n,i,j,k,num,a[n],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        for(j=i+1;j<n;j++)
        {
            if((a[i]>a[j]))
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
        }
    }
    printf("%d",a[i]);
return 0;
}
