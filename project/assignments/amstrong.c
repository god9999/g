#include<stdio.h>
int main()
{
    int number,temp,remainder,result=0;
    scanf("%d",&number);
    temp= number;
    while (temp!= 0)
    {
        remainder=temp%10;
        result+=remainder*remainder*remainder;
        temp/=10;
    }

    if(result==number)
        printf("Armstrong number");
    else
        printf("not an Armstrong number");

    return 0;
}
