#include<stdio.h>
int main(void)
{
	char str[20];
	int i,length;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		printf("%c",str[i]+3);
	}
	return 0;
}
