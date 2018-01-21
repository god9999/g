   #include<stdio.h>
    #include<string.h>
    int main(void)
    {
    	int a,i;
    	int arr[10];
    	scanf("%d",&a);
    	for(i=0;i<a;i++)
    	{
    		scanf("%d",&arr[i]);
    	}
    	for(i=0;i<a;i++)
    	{
    		printf("%d %d\n",i,arr[i]);
    	}
    	return 0;
    }
