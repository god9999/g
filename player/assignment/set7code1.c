#include<stdio.h>
int main(void)
{
    int a;
    int n;
    int sum=0;
    int arr[10];
    int i;
    scanf("%d",&a);
    scanf("%d",&n);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    if(sum==n)
    {
        printf("yes");
    }
    else
    {
     printf("no");   
    }
    return 0;
}
