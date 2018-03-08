#include<stdio.h>
#include<string.h>
int main(void)
{
    int temp;
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d %d",a,b);
    return 0;
}
