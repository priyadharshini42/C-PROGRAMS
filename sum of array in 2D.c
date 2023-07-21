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
    printf("row total:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum+=a[i][j];

        }
        printf("%d ",sum);
        sum=0;
        printf("\n");
    }
    printf("column total:");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sum1+=a[j][i];

        }
        printf("%d ",sum1);
        sum1=0;
        printf("\n");
    }
    return 0;
}
