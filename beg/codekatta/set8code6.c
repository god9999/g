#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,c=0,i;
    scanf("%d",&a);
    for(i=2;i<a;i++)
    {
        if(a%i!=0)
        {
        c++;
        break;
        }
    }
    if(c==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
}
