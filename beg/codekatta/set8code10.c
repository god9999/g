#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int i,length;
    char str[20];
    scanf("%d",&a);
    sprintf(str,"%d",a);
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        if(str[i]%2!=0)
        {
            printf("%c ",str[i]);
        }
    }
    return 0;
}
