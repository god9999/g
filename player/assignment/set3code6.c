#include<stdio.h>
int main(void)
{
    char a[10];
    char k;
    int i;
    scanf("%c",&k);
    scanf("%s",a);
    for(i=1;i<strlen(a);i++)
    {
        if(a[i]==k)
        {
            printf("%d",i+1);
        }
    }
    return 0;
}
