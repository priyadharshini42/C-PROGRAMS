#include <stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int search;
    scanf("%d",&search);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]==search)
       {
           flag=1;
           break;
       }
    }
    if(flag==1)

        printf("search found");
    else
        printf("search not found");



    return 0;
}
