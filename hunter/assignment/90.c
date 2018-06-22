#include<stdio.h>
int main()
{
    int a;
    int reverse=0;
    int s;
    int l;
    int i;
    int sum=0;
    int result;
    int temp;
    char str[20];
    scanf("%d",&a);
    temp=a;
    while(temp>0)
    {
        result=temp%10;
        sum=sum+result;
        temp=temp/10;
    }
    sprintf(str,"%d",sum);
    l=strlen(str);
    s=sum;
    if(l>1)
    {
    while(s!=0)
    {
        reverse=reverse*10;
        reverse+=s%10;
        s/=10;
    }
    if(reverse==sum)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    }
    else
    {
        printf("YES");
    }
     return 0; 
}
