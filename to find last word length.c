#include<stdio.h>
#include<string.h>
int main()
{

    int i=0,count=0,length=0;
    char str[100];
    gets(str);
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            count=0;
        }
        else
        {
            count++;

        }
        length ++;
        i++;

    }
    printf("%d %d",count,length);
}
