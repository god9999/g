#include<stdio.h>
#include<string.h>
int main(void)
{
int a,temp,reverse;
scanf("%d",&a);
temp=a;
while(temp!=0)
{
  reverse=reverse*10;
  reverse=reverse+(temp%10);
  temp=temp/10;
 }
 if(reverse==a)
 {
    printf("Palindrome");
  }
  else
  {
  printf("Not a palindrome");
  }
  return 0;
  }
