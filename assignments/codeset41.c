#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[20];
    int length;
    int i;
    int count;
    printf("Enter the string\n");
    gets(str);
    length=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(!(str[i]==' '))
        {
            count++;
        }
    }
    printf("%d",count);

  
    return 0;
}


