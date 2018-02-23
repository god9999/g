#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[30];
    int length,i;
    printf("Enter the string\n");
    gets(str);
    length=strlen(str);
    for(i=0;str[i]!='\0';i=i+3)
    {
        printf("%c",str[i]);
    }
    return 0;
}
