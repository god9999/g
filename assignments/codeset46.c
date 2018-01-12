#include <stdio.h>
#include<string.h>
int main()
 {
  char s[200];
 scanf("%s",s);
  int i;      
  int num = 0;
  for(i=0;i<strlen(s);i++) 
  {
    if(s[i]>=1 || s[i]<=9)
      {
          num++;
      }
  }
  printf("%d",num);
  return 0;
  }

	     

	  

	   

	    

	 

