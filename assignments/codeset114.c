#include<stdio.h>
#include<string.h>
int main(void)
{
  int a,i;
  int arr[100],min;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
      scanf("%d",&arr[i]);
  }
  min=arr[0];
  for(i=0;i<a;i++)
  {
      if(arr[i]<min)
      {
          min=arr[i];
      }
  }
  printf("%d",min);
  return 0;
}
