#include<stdio.h>
#include<string.h>
int main()
{
    int a,i;
    int k;
    scanf("%d",&a);
    for(i=2;i>=0;i--)
    {
        k=a>>i;
        if(k&1)
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
    }
    return 0;
}
