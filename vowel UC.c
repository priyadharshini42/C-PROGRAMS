#include <stdio.h>
int main()
{
    char str[100];
    int  i;
   printf("Input a sentence: ");
   gets(str);
   printf("The sentence:\n");
   puts(str);
    while(str[i]!='\0')
    {
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o' ||str[i]=='u')
        str[i]=str[i]-32;
        i++;
    }
    printf("sentence with vowels in upper case:\n");
    puts(str);
}
