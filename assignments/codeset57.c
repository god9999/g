#include<stdio.h>
int main(void)
{
	long int a,temp;
	int result;
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
		temp=temp/10;
		result++;
	}
	printf("%d",result);
	return 0;
}
