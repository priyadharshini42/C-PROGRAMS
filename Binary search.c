#include<stdio.h>
int main()
{
  int i,n,first,last,search,flag=0;
  scanf("%d",&n);
  int a[n];
  first=0;
  last=n-1;
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  scanf("%d",&search);
  while(first<=last)
  {
      int mid;
      mid=(first+last)/2;
      if(search==a[mid])
      {
          flag=1;
      }
      if(search>a[mid])
      {
          first=mid+1;
      }
      else
      {
          last=mid-1;
      }
  }
  if(flag==1)
  {
      printf("search found");
  }
  else
  {
      printf("search not found");
  }


   return 0;
}
