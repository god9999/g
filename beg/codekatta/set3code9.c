#include<stdio.h>
#include<string.h>
int main(void)
{
	int a;
	int hour,min;
	scanf("%d",&a);
	if(a>60)
	{	
		hour=a/60;
		min=a%60;
   printf("%d %d",hour,min);
	}
	else
	{
			hour=a/60;
	    min=a%60;
		  printf("%d %d",hour,min);
	}
}
