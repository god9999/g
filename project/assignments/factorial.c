#include<stdio.h>
#include<string.h>
int main(void)
{
  int a,i;
  scanf("%d",&a);
  for(i=0;i<a;i++)
  {
     a=a*i;
  }
  printf("%d",a);
  return 0;
}
