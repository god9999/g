#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int arr[10];
    int k,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=0;i<a;i++)
    {
        if(arr[i]==k)
        {
            printf("%d",k);
        }
    }
    return 0;
}
