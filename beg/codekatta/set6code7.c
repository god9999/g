#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    int a,i,temp;
    int length;
    scanf("%d",&a);
    sprintf(str,"%d",a);
    temp=str[0];
    str[0]=str[1];
    str[1]=temp;
    printf("%s",str);
    return 0;
}
