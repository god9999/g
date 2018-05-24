#include<stdio.h>
#include<string.h>
int main()
{
  int a;
  int arr[10];
  int i,j;
  int k;
  scanf("%d",&a);
  scanf("%d",&k);
  for(i=0;i<a;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<a;i++)
  {
      for(j=i+1;j<a;j++)
      {
          if(arr[i]<arr[j])
          {
              int temp;
              temp=arr[i];
              arr[i]=arr[j];
              arr[j]=temp;
          }
      }
  }
  for(i=0;i<a;i++)
  {
      if(i==k)
      {
      printf("%d",i);
      }
  }
  return 0;
}
