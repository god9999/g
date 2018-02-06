#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,n,d;
    int sum,tn,i;
    scanf("%d",&a);
    scanf("%d",&n);
    scanf("%d",&d);
    sum= (n*(2*a+(n-1)*d))/2;
    tn=a+(n-1)*d;
    for(i=a;i<=tn;i=i+d)
    {
        if(i!=tn)
        {
           // printf("%d +",i);
        }
        else
        {
            printf("%d",sum);
        }
    }
    return 0;
}

