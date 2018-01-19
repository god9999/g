#include<stdio.h>
#include<string.h>
int main(void)
{
    int arr[10];
    int n,k,i,flag=0;
    printf("Enter the value n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the value k");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
    if(arr[i]==k)
        {
          flag=1;
          break;
        }
    }
    if(flag)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}

