#include<stdio.h>
int main()
{
    int a;
    int i;
    int sum=0;
    int arr[10];
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
