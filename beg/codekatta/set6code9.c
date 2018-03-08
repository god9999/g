#include<stdio.h>
#include<string.h>
int main(void)
{
    int arr[10];
    int a,i,max;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    for(i=0;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d",max);
}
