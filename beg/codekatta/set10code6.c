#include<stdio.h>
#include<string.h>
int main(void)
{
    int b,i,f;
    int length;
    char str[20];
    scanf("%s",str);
    length=strlen(str);
    scanf("%d",&b);
    f=(length)-b;
    for(i=f;i<length;i++)
    {
        printf("%c",str[i]);
    }
    return 0;
}
