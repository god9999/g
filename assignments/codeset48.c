#include<stdio.h>
#include<string.h>
int main(void)
{
    int a,b;
    int temp;
    printf("Enter the number\n");
    scanf("%d%d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n%d",a,b);
    return 0;
}
