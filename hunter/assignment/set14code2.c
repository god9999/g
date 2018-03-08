#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[20];
	int i;
	int length;
	int sum=0;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++)
	{
		sum=sum+str[i];
	}
	printf("%d",sum);
	return 0;
}
