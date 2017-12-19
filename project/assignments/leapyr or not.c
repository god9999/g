#include<stdio.h>
#include<string.h>
int main(void)
{
 int d;
 printf("Enter the year you were born");
 scanf("%d",&d);
 if(d%4==0 && d%100!=0 || d%400==0)
 {
   printf("Leap year");
 }
 else
 {
   printf("Not a leap year");
 }
 return 0;
 }
