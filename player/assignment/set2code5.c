#include<stdio.h>
int main(void)
{
char str[30];
int count;
char maxelement;
int maxcount;
int i,j;
int length;
gets(str);
length=strlen(str);
for(i=0;i<length;i++)
{
    count=1;
    for(j=0;j<length;j++)
    {
        if(str[i]==str[j])
        {
            count++;
        if(count>maxcount)
        {
            maxcount=count;
            maxelement=str[j];
        }
        }
        }
    }
    printf("%c",maxelement);
return 0;
}
