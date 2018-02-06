#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,i;
    int t1=0,t2=1,nextterm;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d ",t2);
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
    return 0;
}
