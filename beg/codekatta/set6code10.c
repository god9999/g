#include<stdio.h>
#include<string.h>
int main()
{
   int n,first=0,second=1,next,c;
   scanf("%d",&n);
   for (c =1;c<n;c++)
   {
      if (c<=1)
         next=c;
      else
      {
         next=first+second;
         first=second;
         second=next;
      }
      printf("%d ",next);
   }
   return 0;
}
