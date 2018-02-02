#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    int a,i=0;
    int sum;
    scanf("%d",&a);
    sprintf(str , "%d" , a);
    for(i=0;str[i]!=0;i++)
    {
        printf("%c ",str[i]);
    }
    return 0;
}
