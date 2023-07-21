#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char str[10];
    printf("enter the input: ");
    for(i=0; i<10; i++)
    {
        scanf("%c",&str[i]);
    }
    int range;
    printf("enter the range: ");

     scanf("%d",&range);
    for(int j=0; j<range+1; j++)
    {
        printf("%c",str[j]);
    }
    for(int i=10; i>range; i--)
    {
        printf("%c",str[i]);
    }
    return 0;
}
