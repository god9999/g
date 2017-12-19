
#include<stdio.h>
#include<string.h>
int main(void)
{
   char ch;
   printf("Enter the character");
   scanf("%c",&ch);
   if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
   {
      printf("alphabet");
   }
   else
   {
     printf("not an alphabet");
    }
  return 0;
}
