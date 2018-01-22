#include<stdio.h>
#include<string.h>
int max(int,int[]);
int main(void)
{
    int a,i;
    int arr[10];
    int result;
    printf("Enter the input");
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    result=max(a,arr);
    printf("%d",result);
    return 0;
}
int max(int a,int arr[])
{
    int max,i;
    max=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}

