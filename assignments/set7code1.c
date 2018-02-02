#include<stdio.h>
#include<string.h>
int main(void)
{
   char str[20];
   int i,k;
   gets(str);
   scanf("%d",&k);
   while(i<k)
   {
   printf("%c",str[i]);
   i++;
   }
   return 0;
}
