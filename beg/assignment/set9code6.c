#include<stdio.h>
#include<string.h>
int is_isogram(char str[])
{
    int i,j,temp;
    int len=strlen(str);
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
    for(i=0; i<len; i++)
    {
        if (str[i]==str[i+1])
        return "no";
    }
    return "yes";
}
    
int main () 
{
    char str[30];
    scanf("%s",str);
    printf("%s",is_isogram(str));
    return 0;
}
