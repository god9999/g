#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[10];
	scanf("%s",a);
	int i,flag=0,m;
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='1' || a[i]=='0')
		{
			flag=1;
			break;
		}
	}
	if(flag)
	{
		printf("yes");
	}
	else
	{
	    printf("no");
	}
}
