#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[50];
    int i,length,a,b;
    gets(str);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]>=0||str[i]<=9)
        {
            a++;
        }
        else if(str[i]>='a'||str[i]<='z')
        {
            b++;
        }
    }
    if(a>=0 && b>=0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
}
