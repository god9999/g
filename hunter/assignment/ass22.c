#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    int a;
    int k;
    int b;
    scanf("%d%d%d",&k,&a,&b);
    n=a*4+b*4;
    if(k==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
