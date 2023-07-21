#include<stdio.h>
int main()
{
int n,i,j;
scanf("%d",&n);
for(i=1;i<=2*n;i++)
{
  for(j=1;j<=2*n;j++)
  {
if(i==1||i==2*n)
{
    printf("*");
}
    if((i==i+1||i==i+2||i==i+3||i==i+4||i==i+n)&&(j==i))
{
    printf(" ");
}
  }
  printf("\n");
}
return 0;
}

