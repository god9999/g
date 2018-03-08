#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b,c,result;
    scanf("%d%d%d",&a,&b,&c);
    result=(a*b)%c;
    printf("%d",result);
    return 0;
}
