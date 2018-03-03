#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b,y,x;
    int t;
    scanf("%d",&a);
    scanf("%d",&b);
    x=a;
    y=b;
    while(b!=0)
    {
        t=b;
        b=a%b;
        a=t;
    }
    printf("%d",(x*y)/a);
}
