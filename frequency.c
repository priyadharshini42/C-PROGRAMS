#include<stdio.h>
int main(){
 int a,i,j,arr[1000],count=0,temp,flag,m;
 scanf("%d",&a);
 for(i=0;i<a;i++)
 {
  scanf("%d",&arr[i]);
 }
  for(i=0;i<a;i++)
  {
   for(j=i+1;j<a;j++)
   {
    if(arr[i]>=arr[j])
    {
     temp=arr[i];
     arr[i]=arr[j];
     arr[j]=temp;
    }
  }
  }
  for(i=0;i<a;i++)
  {
   if(arr[i]==arr[i+1])
   {
    count=count + 1;
    if(count>=a/2)
  {
    flag!=1;
    m=arr[i];
    break;
  }
  }
  }
  if(flag!=1)
  {
      printf("%d",m);
  }return 0;
}
