#include<stdio.h>
int main()
{
    int i,j,row,col,a[100][100],sum=0,sum1=0;
    scanf("%d %d",&row,&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=col-1;j>=0;j--)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}
