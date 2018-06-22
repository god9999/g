#include<stdio.h>
#include<string.h>
int main()
{
  int a;
  int arr[1000];
  int k;
  int count=0;
  int i;
  scanf("%d",&a);
  scanf("%d",&k);
  for(i=1;i<=a&&i<=k;i++)
  {
      if(a%i==0 && k%i==0)
      {
         count=i;
      }
  }
  printf("%d",count);
}
