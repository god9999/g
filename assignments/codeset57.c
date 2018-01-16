#include<stdio.h>
int main(void)
{
	int a;
	int temp,result;
	scanf("%d",&a);
	temp=a;
	while(temp!=0)
	{
		temp=temp%10;
		result=result*10+temp;
		temp=temp/10;
	}
	printf("%d",result);
	return 0;
}
