#include<stdio.h>
#include<string.h>
int main(void)
{
  int a,b,c;
  printf("largest number");
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
  {
     printf("%d",a);
  }
  else if(b>c)
  {
    printf("%d",b);
   }
   else
   {
    printf("%d",c);
   }
   return 0;
 }
