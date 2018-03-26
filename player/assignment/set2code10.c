#include<stdio.h>
int main(void)
{
	char str[20];
	int i,length;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]=='X')
	    str[i]='A';
		else if(str[i]=='Y')
		str[i]='B';
		else if(str[i]=='Z')
		str[i]='C';
		else
		str[i]=str[i]+3;
	}
	printf("%s",str);
	return 0;
}
