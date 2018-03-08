#include<stdio.h>
#include<string.h>
int main(void)
{
	int v=1;
	char str[20];
	int length;
	int i;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			v=0;
			break;
		}
	}
	if(v==0)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
return 0;
}
