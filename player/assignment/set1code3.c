#include<stdio.h>
int main(void)
{
	int a,sum=0,res;
	scanf("%d",&a);
	while(a!=0)
	{
		res=a%10;
		sum=sum*10+res;
		a=a/10;
	}
	printf("%d",sum);
	return 0;
}
