#include<stdio.h>
#include<string.h>
int main(void)
{
  int i,a,c=0;
  scanf("%d",&a);
  for(i=2;i<a;i++)
  {
     if(a%i==0)
     {
        c++;
      }
   }
  if(c==0)
  {
  printf("Prime number");
  }
  else
  {
  printf("Not a prime number");
  }
  return 0;
}
