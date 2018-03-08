#include <stdio.h>

int main()
{
 int n,k,arr[20],i=0,min,temp,j;
scanf("%d%d",&n,&k);
 printf("enter numbers");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
for(j=0;j<n-1;j++)
    {
for(i=j;i<n;i++)
{
if(arr[i]<arr[j])
{
temp=arr[i];
arr[i]=arr[j];
arr[j]=temp;
}
}
}
printf("%d",arr[--k]);
return 0;
}
