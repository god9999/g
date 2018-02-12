#include<stdio.h>
#include<string.h>
int main()
{
    char str[30];
    int length;
    int i,j;
    scanf("%s",str);
    length=strlen(str);
    for(i=0;str[i]!='\0';i++)
    {
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'|| str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            for(j=i;str[j]!='\0';j++)
            {
                str[j]=str[j+1];
            }
            length--;
            i--;
        }
    }
    length=strlen(str);
    for(i=0;i<length;i++)
    {
        printf("%c",str[length-i-1]);
    }
  return 0;  
}
