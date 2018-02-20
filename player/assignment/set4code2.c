#include<stdio.h>
#include<conio.h>
int main(void)
{
    int arr[5];
    int k,a;
    int i;
    scanf("%d",&a);
    scanf("%d",&k);
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {
        if(k==arr[i])
        {
            printf("yes");
            break;
        }
        else
        {
            printf("no");
            break;
        }
    }
return 0;
}
