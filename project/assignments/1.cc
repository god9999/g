#include<stdio.h>
#include<string.h>
int main(void)
{
    int p;
    int c;
    scanf("%d",&p);
    for(int i=1;i<=p;i++)
    {
        c=0;
       for(int j=1;j<=p;j++)
       {
           if(i%j==0)
           {
               c++;
           
           }
       }
       if(c==2)
       {
           printf("%d",i);
       }
    }
    return 0;
}
