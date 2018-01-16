#include<stdio.h>
#include<string.h>
int main(void)
{
	int n;
	int max,min;
	int arr[10],a[10];
	int i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
	    a[i]=arr[i];
	}
	max=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>max)
		max=arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	printf("%d ",min);
	printf("%d",max);
	return 0;
}
