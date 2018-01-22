#include<stdio.h>
#include<string.h>
int min(int,int[]);
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
    result=min(a,arr);
    printf("%d",result);
    return 0;
}
int min(int a,int arr[])
{
    int min,i;
    min=arr[0];
    for(i=0;i<a;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}

