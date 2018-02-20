#include<string.h>
#include<stdio.h>
int main(void)
{
    char str[30];
    int i,length;
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else
        {
            str[i]=str[i]+32;
        }
    }
    printf("%s",str);
    return 0;
}
