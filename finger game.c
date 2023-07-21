#include<stdio.h>
int main()
{
    int n,rem,count;
    printf("enter the number: ");
    scanf("%d",&n);
    if(n!=0)
    {
        rem=n%8;
       if(rem==0)
       {
           count=2;

       }
       else if(rem<5)
       {
           count=rem;
       }
       else{
        count=10-rem;
       }
       switch(count)
       {
           case 1:printf("Thumb");
           break;
           case 2:printf("Index");
           break;
           case 3:printf("Middle");
           break;
           case 4:printf("Ring");
           break;
           case 5:printf("Little");
           break;
       }
    }
    return 0;

}
