#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int i,sum,result;
    scanf("%d",&a);
    i=a;
    while(i!=0)
    {
        result=i%10;
        sum=sum*10+result;
        i=i/10;
    }
    printf("%d",sum);
    return 0;
}
