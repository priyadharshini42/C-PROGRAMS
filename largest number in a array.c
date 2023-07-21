#include<stdio.h>
int main()
{

    int n,i,j;
    scanf("%d",&n);
    int a[100];
    int temp;
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<=a[j])
            {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }

        }
    }


     printf("%d",a[0]);


    return 0;
}
