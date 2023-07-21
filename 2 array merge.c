#include<stdio.h>
int main()
{
    int n,m,i,j,a[n],b[m],merge;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n;i<m;i++)
    {
        merge=a[i]=b[j];
        printf("%d",merge);
    }
    return 0;
}
