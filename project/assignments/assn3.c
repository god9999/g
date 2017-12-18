#include<stdio.h>
#include<string.h>
int main(void)
{
  char ch;
  printf("Enter the charcter");
  scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
    {
       printf("vowel");
     }
    else
    {
      printf("consonant");
     }
  return 0;
}
