#include<stdio.h>
#include<string.h>
int main()
{   
  char str[20];
  int i=0;
  gets(str);
  int count = 0;
  while (str[i] != '\0')
  {
    if (str[i] == ')')
        count--;
    if (str[i] == '(')
        count++;
    i++;        
  }
  if (count == 0)
      printf("yes");
      else
      printf("no");
  return 0;
 }
