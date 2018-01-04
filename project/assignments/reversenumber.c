#include<stdio.h>
#include<string.h>
int main(void)
{
    int number,reverse,temp;
    printf("Enter the number");
    scanf("%d",&number);
    temp=number;
    while(temp!=0)
    {
        reverse=reverse*10;
        reverse=reverse+(temp%10);
        temp=temp/10;
    }
        printf("%d",reverse);
    return 0;
}

