#include<stdio.h>
#include<string.h>
int main(void)
{
     int a,x=1,power=2,count=0;
     scanf("%d",&a);
     for(int i=0;i<a;i++)
     {
      x=x*power;
     if(x==a)
     {
     	count=1;
     	break;
     }
     if(x>a)
     break;
     }
     if(count==1)
     {
     	printf("yes");
     }
     else
     {
     	printf("no");
     }
     return 0;
}
