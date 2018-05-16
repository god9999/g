#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    int arr[10];
    int i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(arr[i]==i)
        {
            printf("%d ",i);
        }
    }
return 0;
}
