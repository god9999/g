#include<stdio.h>
int main(void)
{
    char str[20];
    int i;
    int count=0;
    scanf("%s",str);
    while(str[i]!='\0')
    {
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}
