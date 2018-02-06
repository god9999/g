#include<string.h>
#include<stdio.h>
int main(void)
{
    int a,temp;
    char str[1000];
    scanf("%d",&a);
    sprintf(str,"%d",a);
    temp=str[0];
    str[0]=str[1];
    str[1]=temp;
    printf("%s",str);
    return 0;
}
