#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b;
    int i,sum;
    scanf("%d",&a);
    scanf("%d",&b);
    sum=a*b;
    if(sum%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
