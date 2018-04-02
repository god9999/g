#include<stdio.h>
#include<string.h>
int main(void)
{
    char str[30];
    char str1[10][10];
    int i,j,k,x;
    int length;
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            str1[k][j]='\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j]=str[i];
            j++;
        }
    }
        str1[k][j]='\0';
        
        
   for(i=0;i<=k;i++)
   {
       length=strlen(str1[i]);
       for(j=0,x=length-1;j<x;j++,x--)
       {
           int temp;
          temp=str1[i][j];
          str1[i][j]=str1[i][x];
          str1[i][x]=temp;
       }
   }
   
   for(i=0;i<=k;i++)
   {
       printf("%s ",str1[i]);
   }
       
    return 0;
}
