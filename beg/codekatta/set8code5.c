#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    int i,length;
    scanf("%s",str);
    length=strlen(str);
    if(length%2==0)
    {
        length=length/2;
        str[length]=str[length+1]='*';
    }
    else
    {
        length=length/2;
    str[length]='*';
    }
    printf("%s",str);
    return 0;
}
