#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int count;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        count++;
    }
    printf("%d",count);
    return 0;
}
