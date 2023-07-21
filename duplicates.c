#include<stdio.h>
 int main()
{
    int n;
    scanf("%d",&n);
    int i,j,a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i;j<n-1;j++)
        {
            if(a[i]==a[j+1])
            {

                printf("%d ",a[j+1]);
            }
        }
    }
    return 0;
}
