#include<stdio.h>
int main()
{
 int n,i,j;
 scanf("%d",&n);
 int arr[n][n];
 int rmin=0,rmax=n-1,cmin=0,cmax=n-1,count=1;
 while(rmin<=rmax)
 {
     for(i=cmin;i<=cmax;i++)
       arr[rmin][i]=count++;
     for(i=rmin+1;i<=rmax;i++)
        arr[i][cmax]=count++;
     for(i=cmax-1;i>=cmin;i--)
        arr[rmax][i]=count++;
     for(i=rmax-1;i>=rmin+1;i--)
        arr[i][cmin]=count++;
        rmin++,cmin++,rmax--,cmax--;

 }
 for(i=0;i<n;i++)
 {
     for(j=0;j<n;j++)
     {
         printf("%d",arr[i][j]);
     }
     printf("\n");
 }
 return 0;
}
