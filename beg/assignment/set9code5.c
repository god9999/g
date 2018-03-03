#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[30];
    int i,length;
   // printf("Enter the string");
    scanf("%s",str);
    length=strlen(str);
    for(i=0;i<length;i=i+2)
    {
        printf("%c",str[i]);
    }
    printf(" ");
    for(i=1;i<length;i=i+2)
    {
        printf("%c",str[i]);
    }
    exit(0);
}
