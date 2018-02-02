#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b,result;
    scanf("%d%d",&a,&b);
    result=a+b;
    if(result%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
    return 0;
}
