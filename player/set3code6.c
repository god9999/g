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
        if(str[i]==' ')
        {
            str[i+1]--;
        }
    }
printf("%s",str);
return 0;
}
