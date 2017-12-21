#include<stdio.h>
#include<string.h>
int main(void)
{
    int a;
    int temp,reverse=0;
    printf("Enter a number");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+temp%10;
        temp=temp/10;
    }
    
    
        printf("%d",reverse);
    
    return 0;
}
