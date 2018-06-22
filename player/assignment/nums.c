#include<stdio.h>
int main()
{
    char str[30];
    int i;
    int flag;
    scanf("%s",str);
    for(i=0;i<strlen(str);i++)
    {
        flag=0;
        if(str[i]>='1'&& str[i]<='9')
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}
