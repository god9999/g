#include<stdio.h>
#include<string.h>
int main(void)
{
  int a,b,i;
  scanf("%d%d",&a,&b);
  for(i=a;i<=20;i++)
  {
    if(i%2!=0)
    {
       printf("%d",i);
     }
   }
   return 0;
}