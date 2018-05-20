#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int arr[10];
    int i;
    int j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==0)
            {
                printf("%d %d ",arr[i],arr[j]);
            }
        }
    }
    return 0;
}
