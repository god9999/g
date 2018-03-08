#include<stdio.h>
#include<string.h>
int main(void)
{
	int a;
	int l,r;
	scanf("%d",&a);
	scanf("%d",&l);
	scanf("%d",&r);
	
	if(a>l && a<r)
	{
		printf("yes");
	}
	else
	{
	printf("no");	
	}
	return 0;
}
