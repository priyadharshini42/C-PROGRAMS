#include<stdio.h>
#include<math.h>
int main()
{
    int i,a,b,power,k,rem,rev=0,rem1,rev1=0;
    scanf("%d",&a);
    scanf("%d",&b);
    power=pow(a,b);
    printf("%d",power);
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        rem=power%10;
        rev=rev*10+rem;
        power=power/10;
    }
    printf("%d",rev);
    while(rev!=0)
    {
        rem1=rev%10;
        rev1=rev1*10+rem1;
        rev=rev/10;
    }
    printf("%d",rev1);

    }
