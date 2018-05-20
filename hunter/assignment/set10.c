#include<stdio.h>
#include<string.h>
int main()
{
int n;
int arr[n];
int i;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
    if(arr[i]%2==0&&i%2!=0||arr[i]%2!=0&&i%2==0)
    {
        printf("%d ",arr[i]);
    }
}
return 0;
}
    
