#include<stdio.h>
#include<string.h>
int count=0;
int main(void)
{
  if(count==0)
  {
    int count=1;
    while(++count<=12)
    {
       printf("%d\n",count);
    }
   }
  printf("%d",count);
 return 0;
 }
