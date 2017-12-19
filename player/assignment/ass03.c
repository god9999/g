#include<stdio.h>
#include<string.h>
int main(void)
{
	int a,count,i,sum;
	scanf("%d",&a);
	count=a;
	for(i=1;i<4;i++)
	{
		count=count*10;
		a=a+count;
		sum+=a;
	}
	printf("%d",sum+9);
return 0;
}

