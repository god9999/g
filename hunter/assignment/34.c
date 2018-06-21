#include <stdio.h>
int main()
  {
   	char a[100];
	int b[40];
	int n,i,d,j=97;
	scanf("%d",&n);
	for(d=0;d<n;d++)
	{
	 scanf("%d",&b[d]);
	}
	for(i=1;i<=26;i++)
	{
		a[i]=j;
		j++;
	}
	for(d=0;d<=n;d++)
	{
		for(i=1;i<=26;i++)
		{
			if(b[d]==i)
			{
			}
		}
	}
	printf("%d",n);
}
