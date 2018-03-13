#include<stdio.h>
int main(void)
{
   char str[30];
   char str1[30];
   int i;
   scanf("%[^/ns]",str);
   i=0;
   if(str[i]!='\0')
	{
		str[i]=str[i]-32;
  }
   for(i=0;i<strlen(str);i++)
   {
   	if(str[i]==' ')
   	{
   		str[i+1]=str[i+1]-32;
   	}
   }
   printf("%s",str);
   return 0;
}
