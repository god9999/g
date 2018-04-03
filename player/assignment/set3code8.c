#include<stdio.h>
int main(void)
{
    char a[10];
    char k;
    int i;
    int count=0;
    scanf("%c",&k);
    scanf("%s",a);
    for(i=1;i<strlen(a);i++)
    {
        if(a[i]==k)
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
