#include<stdio.h>
#include<string.h>
#define MAX 100
int main(void)
{
    int p,t,r,SI;
    scanf("%d",&p);
    scanf("%d",&t);
    scanf("%d",&r);
    SI=p*t*r/MAX;
    printf("%d",SI);
    return 0;
}
