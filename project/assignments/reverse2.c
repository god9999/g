#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[30];
	int i,j,temp;
	scanf("%s",str);
	j=strlen(str)-1;
	i=0;
	while(j>i)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
			i++;
        	j--;
	}
	printf("%s",str);
	return 0;
}
