#include<stdio.h>
#include<string.h>
int main()
{
    int i,j;
    char c[10];
    scanf("%s",&c);
    for(i=0;c[i]!='\0';i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",c[i]);
        }
        printf("\n");
    }
    return 0;
}
