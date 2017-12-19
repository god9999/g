#include<stdio.h>
#include<string.h>
int main(void)
{
  int a,b,i,temp,digit;
  int rema;
  scanf("%d%d",&a,&b);
  for(i=a+1;i<b;i++)
  {
    temp=i;
    digit=0;
    while(temp!=0)
    {
      rema= temp%10;
      rem+=rema*rema*rema;
      temp=temp/10;
     }
    if(i==digit)
    {
      printf("%d",i);
     }
    }
    return 0;
  }
