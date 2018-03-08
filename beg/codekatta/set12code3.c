#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int i,k,c=0;
    int arr[10];
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
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
