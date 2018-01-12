#include <stdio.h>
int main()
 {
  char s[20];
  gets(s);
  int i;      
  int num = 0;
  for(i =0;i<strlen(s);i++) {
  if(s[i] == ' ')
  {
num++;
 }
 }
 printf("%d\n", num);
return 0;
}

	  
