#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[30];
    int i,j,temp,len;
    scanf("%s",str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
    for(j=i+1;j<len;j++)
    {
        if(str[i]>str[j])
        {
            temp=str[i];
            str[i]=str[j];
            str[j]=temp;
        }
    }
    }
    printf("%s",str);
    return 0;
}
    
